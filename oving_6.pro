TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    position.cpp \
    beaver.cpp \
    vehicle.cpp \
    car.cpp

HEADERS += \
    ianimal.h \
    ipositionprovider.h \
    position.h \
    beaver.h \
    vehicle.h \
    car.h
