#include "Car.hpp"
#include <iostrem>
Car::Car(int year,const std::string& maker,int sp):release(year),customer(maker),sp(speed){}

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
    Car car(1,"a");
    for(int i=0;i<5;i++)
    {   car.acc();
    }
  int speed1=car.speed();
    std::cout<<"speed after acc: "<<car.speed1();
    for(int i=0;i<5;i++){
        cout<<"speed after brake: "<<car.speed();
    }
  int speed1=car.speed1();

    return 0;
}
