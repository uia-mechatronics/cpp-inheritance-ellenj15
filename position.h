#ifndef POSITION_H
#define POSITION_H


class Position
{
public:
    Position(double x, double y);
    ~Position();

    void setPosition(double xNew, double yNew);
    double getXPosition();
    double getYPosition();

    // Legg til get- og set-funksjoner her.

private:

    double x_;
    double y_;

};

#endif // POSITION_H
