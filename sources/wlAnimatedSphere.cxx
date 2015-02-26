///////////////////////////////////////////////////////////////////////////////
//  File         :    wlAnimatedSphere.cxx                                   //
//  Author       :    Wilfrid LEFER                                          //
//  Comment      :    Modele de sphere animee                                //
//  Related file :    wlAnimatedSphere.h, wlMesh.{h,cxx}                     //
//                    Wilfrid Lefer - UPPA - 2010                            //
///////////////////////////////////////////////////////////////////////////////


#include <wlAnimatedSphere.h>

wlAnimatedSphere::wlAnimatedSphere(int debug, wlQGLViewer *v, QString filename)
  : wlAnimatedMesh(debug, v, filename)
{
  this->Trace("-> wlAnimatedSphere(%p, \"%s\")", v, filename.toAscii().constData());
  this->Clear();
  this->Trace("<- wlAnimatedSphere()");
}

void
wlAnimatedSphere::PrintSelf()
{
  wlAnimatedMesh::PrintSelf();
}

void
wlAnimatedSphere::PrintContent()
{
  this->PrintSelf();
}

float
wlAnimatedSphere::GetRadius()
{
  // cet appel a GetSize() a pour objectif de verifier que la donnee est a jour
  (void)this->GetSize();
  this->radius = this->size[0] / 2;
  return this->radius;
}

QVector<double>
wlAnimatedSphere::ComputeCollisionWithPlan(QVector<double> equationPtNorm)
{
    qDebug()<<"---------------------";
    this->Trace("-> ComputeCollisionWithPlan");
    if (equationPtNorm.size() != 4){
           this->Error("ComputeCollisionWithPlan: equation du plan invalide");
        return QVector<double> ();
    }
    ////////////////////////////////////////////////////////////////
    QVector3D unPoint;              //un point quelconque appartenant au plan (Il faudra generaliser)(ici il s'agit de tout point ayant la coordonnee suivant z qui est nulle)
    QVector3D next_center;          //coordonnees du centre de la sphere au prochain step
    QVector3D next_vel;             //coordonnees du vecteur vitesse au prochain step
    QVector3D mid_vel;              //vitesse moyenne entre la position courante et celle au pas de temps suivant
    QVector3D centreSphere;         //le centre de la sphere
    QVector3D normale;              //defini la normal caracterisant le plan considere
    QVector3D vitesse;              //la vitesse courante de la balle (un vecteur incident au point d'impact de la collision)
    double rayon;                   //rayon de la sphere
    double distance;                //distance entre le centre de la sphere et un point du plan considere
    double next_distance;           //distance entre le centre de la sphere et le sol au pas de temps suivant
    QVector<double> impact_values;  //valeurs associées a la collision


    //int k=0;                        //le nombre de division du pas de temps jusqu'a obtention d'une collision

    unPoint.setX(1);
    unPoint.setY(1);
    unPoint.setZ(0);

    next_center.setX(this->GetCurrentCenter().at(0) + this->cvel.at(0) * this->timestep);
    next_center.setY(this->GetCurrentCenter().at(1) + this->cvel.at(1) * this->timestep);
    next_center.setZ(this->GetCurrentCenter().at(2) + ( ( this->cvel.at(2) - (9.81 * this->timestep ) )/2 * this->timestep ));
    //qDebug()<<"next_center "<<next_center.x() <<next_center.y() <<next_center.z();

    next_vel.setX(this->cvel.at(0));
    next_vel.setY(this->cvel.at(1));
    next_vel.setZ(this->cvel.at(2) - 9.81 * this->timestep);
    //qDebug()<<"next_vel "<<next_vel.x() <<next_vel.y() <<next_vel.z();

    mid_vel.setX( (next_center.x() - centreSphere.x())/timestep );
    mid_vel.setY( (next_center.y() - centreSphere.y())/timestep );
    mid_vel.setZ( (next_center.z() - centreSphere.z())/timestep );
    //qDebug()<<"mid_velocity"<<mid_vel.x() <<mid_vel.y() <<mid_vel.z();

    centreSphere.setX(this->GetCurrentCenter().at(0));
    centreSphere.setY(this->GetCurrentCenter().at(1));
    centreSphere.setZ(this->GetCurrentCenter().at(2));
    //qDebug()<<centreSphere.x() <<centreSphere.y() << centreSphere.z();

    normale.setX(equationPtNorm.at(0));
    normale.setY(equationPtNorm.at(1));
    normale.setZ(equationPtNorm.at(2));
    //qDebug()<<"normale "<<normale.x() << normale.y() <<normale.z();

    vitesse.setX(this->cvel.at(0));
    vitesse.setY(this->cvel.at(1));
    vitesse.setZ(this->cvel.at(2));

    rayon = this->GetRadius();

    distance = centreSphere.distanceToPlane(unPoint,normale);
    //qDebug()<<"distance "<<distance;

    next_distance = next_center.distanceToPlane(unPoint,normale);
    //qDebug()<<"next_distance "<<next_distance;


    if( distance > 0){
        //qDebug()<<"centre de la balle au dessu du sol";
        if(distance-rayon > tolerance){
            qDebug()<<"aucune collision detectee";
        }

        if( (distance-rayon <= this->tolerance) && (distance-rayon >= 0) ){
            qDebug()<<"collision detectee***********************************";

            qDebug()<<"next_distance "<<next_distance;
            qDebug()<<"distance "<<distance;

            //on remet la valeur du time step a sa valeur initiale
            //this->timestep = 0.1;

            //preparation des valeurs associees au point d'impact [point d'impact et normale en ce point]

            impact_values.push_back(centreSphere.x());
            impact_values.push_back(centreSphere.y());
            impact_values.push_back(distance);

            impact_values.push_back(normale.x());
            impact_values.push_back(normale.y());
            impact_values.push_back(normale.z());



            //appel de la reaction a la collision
            this->ComputeReaction(impact_values);
            return QVector<double> ();
        }

        /*if( distance-rayon < 0 ){
            qDebug()<<"collision tardive";
        }*/

        if( next_distance-rayon < 0){
            qDebug()<<"collision tardive imminente !!!!!";
            qDebug()<<"next_distance "<<next_distance;
            qDebug()<<"distance "<<distance;

            double distance_enfoncement = fabs(next_distance - rayon);
            qDebug()<<"distance_enfoncement prevue"<< distance_enfoncement;

            //on calcule la valeur ideale de la position du centre de la sphere suivant z au prochain step
            double z_ideal = next_center.z() + distance_enfoncement;    //puis on passe cette valeur a la fn computeReaction

            impact_values.push_back(z_ideal);

            //appel de compute reaction
            this->ComputeReaction(impact_values);
        }
    }
  ////////////////////////////////////////////////////////////////
  return QVector<double> ();
  this->Trace("<- ComputeCollisionWithPlan");
}

QVector<double>
wlAnimatedSphere::ComputeCollisionWithOther(wlAnimatedMesh *other)
{
  return wlAnimatedMesh::ComputeCollisionWithOther(other);
}

void
wlAnimatedSphere::ComputeReaction(QVector<double> impact)
{
    if(impact.size() > 1 && impact.size() < 6){
        return;
    }
    qDebug()<<"cvel "<<cvel.at(0) <<cvel.at(1) <<cvel.at(2);
    qDebug()<<"compute reaction start here";
    if (impact.size() == 1){
        //traitement d'une collision tardive imminente : MAJ de la vitesse suivant z pour une position du centre de la balle ideal au prochain pas de temps
        double ccenter_z = this->GetCurrentCenter().at(2);
        this->cvel.insert(2, (2 * ( (impact.at(0) - ccenter_z)/this->timestep) + 9.81 * this->timestep));

        qDebug()<<"cvel "<<cvel.at(0) <<cvel.at(1) <<cvel.at(2);
    }

    //this->Trace("-> ComputeReaction()");
    if (impact.size() == 6){

        QVector3D vitesse_incidente;
        QVector3D normale;
        QVector3D point_impact;
        QVector3D vitesse_resultante;

        /*incident_speed.setX(this->cvel.at(0));
        incident_speed.setY(this->cvel.at(1));
        incident_speed.setZ(this->cvel.at(2));*/
        //this->Trace("Vitesse incidente : %f, %f, %f",incident_speed.x(),incident_speed.y(),incident_speed.z());

        vitesse_incidente.setX(this->cvel.at(0));
        vitesse_incidente.setY(this->cvel.at(1));
        vitesse_incidente.setZ(this->cvel.at(2) + this->cvel_p.at(2));
        qDebug()<<"vitesse_incidente"<<vitesse_incidente.x() <<vitesse_incidente.y() <<vitesse_incidente.z() ;


        point_impact.setX(impact.at(0));
        point_impact.setY(impact.at(1));
        point_impact.setZ(impact.at(2));
        qDebug()<<"point_impact"<<point_impact.x() <<point_impact.y() <<point_impact.z();

        normale.setX(impact.at(3));
        normale.setY(impact.at(4));
        normale.setZ(impact.at(5));
        qDebug()<<"normale"<<normale.x() <<normale.y() <<normale.z();
        //this->Trace("normal : %f, %f, %f",normal.x(),normal.y(),normal.z());

        //calcul du produit scalaire entre le vect vitesse de la balle et la normale au plan
        double scal_in = QVector3D::dotProduct(vitesse_incidente,normale);
        qDebug()<<"produit scalaire"<<scal_in;

        vitesse_resultante.setX( (vitesse_incidente.x() - 2 * scal_in * normale.x()) * /*this->k*/ 0.8);
        vitesse_resultante.setY( (vitesse_incidente.y() - 2 * scal_in * normale.y()) * /*this->k*/ 0.8);
        vitesse_resultante.setZ( (vitesse_incidente.z() - 2 * scal_in * normale.z()) * /*this->k*/ 0.8);
        qDebug()<<"vitesse_resultante"<<vitesse_resultante.x() <<vitesse_resultante.y() <<vitesse_resultante.z() ;

        this->cvel.insert(0, vitesse_resultante.x()) ;
        this->cvel.insert(1, vitesse_resultante.y()) ;
        this->cvel.insert(2, vitesse_resultante.z()) ;
    }

    this->Trace("<- ComputeReaction()");
}
