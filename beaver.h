#ifndef BEAVER_H
#define BEAVER_H

#include "ianimal.h"
#include "ipositionprovider.h"



class Beaver : public IAnimal, public IPositionProvider
{
public:
    Beaver();

    // IPositionProvider interface
    Position getPosition();

    // IAnimal interface
    void move();


};

#endif // BEAVER_H
