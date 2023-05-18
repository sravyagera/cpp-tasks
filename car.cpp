#include "car.hpp"
#include <iostream>
int main()
{ 
    Car car;
    car.release=1;
    car.customer='Audi';
    car.speed=100;
    for(int i=0;i<5;i++)
    {   car.acc();
    }
    std::cout<<"speed after acc: "<<car.s()<<"km/h"<<std::endl;
    for(int i=0;i<5;i++){
            car.brake();
    }
    std::cout<<"speed after brake: "<<car.s()<<"km/h"<<std::endl;
    return 0;
}
