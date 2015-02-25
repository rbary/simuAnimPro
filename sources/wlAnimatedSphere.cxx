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
wlAnimatedSphere::ComputeCollisionWithPlan(QVector<double> equation)
{
  return wlAnimatedMesh::ComputeCollisionWithPlan(equation);
}

QVector<double>
wlAnimatedSphere::ComputeCollisionWithOther(wlAnimatedMesh *other)
{
  return wlAnimatedMesh::ComputeCollisionWithOther(other);
}

void
wlAnimatedSphere::ComputeReaction(QVector<double> impact)
{
  return wlAnimatedMesh::ComputeReaction(impact);
}
