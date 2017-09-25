#include "position.h"



Position::Position(double x, double y)
    : x_(x)
    , y_(y)
{

}


Position::~Position()
{

}

void Position::setPosition(double xNew, double yNew)
{
    x_ = xNew;
    y_ = yNew;

}

double Position ::getXPosition()
{
    return x_;
}

double Position ::getYPosition()
{
    return y_;
}

