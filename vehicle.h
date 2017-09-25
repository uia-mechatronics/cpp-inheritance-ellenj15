#ifndef VEHICLE_H
#define VEHICLE_H

#include "ipositionprovider.h"



class Vehicle : public IPositionProvider
{
public:
    Vehicle();
    double stopCar();
};

#endif // VEHICLE_H
