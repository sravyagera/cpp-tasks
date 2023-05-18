#include "car.hpp"
#include <iostream>
Car::Car(int a,const std::string& maker,int sp):release(a),customer(maker),speed(sp){}

    int Car::r() const {
        return release;
        }
    std::string Car::c() const{
        return customer;
    }
    int Car::s() const{
        return speed;
    }
    
    void Car::acc
    {
        speed=speed+10;
    }
    void Car::brake
    {
        speed=speed-10;
    }



int main()
{
    Car car(1,"a",0);
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
