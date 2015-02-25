TEMPLATE = app
TARGET +=
QT *= opengl xml
DEPENDPATH += .
INCLUDEPATH += /usr/include/qt4/Qt /usr/include/QGLViewer /usr/include/GL
LIBS += -L/usr/local/lib -lQGLViewer -L/usr/lib/x86_64-linux-gnu -lGLU
QMAKE_CXXFLAGS += -Wno-write-strings
QMAKE_CXXFLAGS_DEBUG += -Wno-deprecated
QMAKE_CXXFLAGS_RELEASE += -Wno-deprecated

HEADERS += saProject.h wlCore.h saViewer.h wlQGLViewer.h wlAnimatedMesh.h wlMesh.h wlAnimatedSphere.h wlSimulator.h wlCage.h wlGround.h wlSimulationEnvironment.h
SOURCES += sa.cxx saProject.cxx wlCore.cxx saViewer.cxx wlQGLViewer.cxx wlAnimatedMesh.cxx wlMesh.cxx wlAnimatedSphere.cxx wlSimulator.cxx wlCage.cxx wlGround.cxx wlSimulationEnvironment.cxx
