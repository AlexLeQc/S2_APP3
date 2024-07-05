TEMPLATE     = vcapp
TARGET       = testGraphicusGUI
CONFIG      += warn_on qt debug windows console
HEADERS     += monInterface.h canevas.h carre.h cercle.h couche.h forme.h rectangle.h vecteur.h
SOURCES     += testGraphicusGUI.cpp monInterface.cpp canevas.cpp cercle.cpp rectangle.cpp couche.cpp carre.cpp vecteur.cpp
INCLUDEPATH += ../APP3_Graphicus03
LIBS        += ../APP3_Graphicus03/graphicusGUI.lib
QT          += widgets
