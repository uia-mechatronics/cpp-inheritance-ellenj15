TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    position.cpp \
    beaver.cpp \
    vehicles.cpp \
    car.cpp

HEADERS += \
    ianimal.h \
    ipositionprovider.h \
    position.h \
    beaver.h \
    vehicles.h \
    car.h
