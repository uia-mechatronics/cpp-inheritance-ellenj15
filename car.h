#ifndef CAR_H
#define CAR_H

#include "vehicle.h"



class car : public Vehicle
{
public:
    car();
    virtual ~car() {}
    double fillGas();
    double drive();
};

#endif // CAR_H
