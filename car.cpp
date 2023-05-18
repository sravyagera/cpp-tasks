#include "car.hpp"
#include <iostream>
Car::Car(int a,const std::string& maker,int sp){
    release=a;
    customer=maker;
    speed=sp;
}

    int Car::r() const {
        return release;
        }
    int Car::c() const{
        return customer;
    }
    int Car::s() const{
        return speed;
    }
    
    void acc{
        speed=speed+10;
    }
    void brake{
        brake=brake-10;
    }
}


int main()
{
    Car car(1,"a",0);
    for(int i=0;i<5;i++)
    {   car.acc();
    }
    std::cout<<"speed after acc: "<<car.speed();
    for(int i=0;i<5;i++){
            car.brake();
    }
    cout<<"speed after brake: "<<car.speed();
    return 0;
}
