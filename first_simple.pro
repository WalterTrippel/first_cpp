TEMPLATE = app
CONFIG += console
CONFIG += c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Therapist.cpp \
    Patient.cpp \
    Gynecologist.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    MedStuff.h \
    Therapist.h \
    Patient.h \
    Gynecologist.h \
    GenderException.h \
    AgeException.h

