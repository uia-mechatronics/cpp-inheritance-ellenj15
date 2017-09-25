#include <iostream>
#include <ianimal.h>
#include <ipositionprovider.h>
#include <beaver.h>



int main()
{

    Beaver Elsa;
    Elsa.move();
    Elsa.getPosition();

    IAnimal& e = Elsa;
    e.move();

    Position X(5.5, 9.8);
    std::cout<<"Posisjonen er "<<X.getXPosition()<< " " <<X.getYPosition()<<std::endl;



return 0;
}
