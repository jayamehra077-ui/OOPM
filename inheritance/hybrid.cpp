#include<iostream>
using namespace std;
class vehicle
{
    public:
vehicle()
{
    cout<<"THIS IS VEHICLE"<<endl;
}
};
class fare
{
    public:
fare()
{
    cout<<"FARE OF VEHICAL"<<endl;
}
};
class car:public vehicle,public fare
{
public:
car()
{
    cout<<"THIS IS CAR"<<endl;
}
};
class bus
{
public:
bus()
{
    cout<<"THIS IS BUS"<<endl;
}
};
int main()
{
    car a1;
    bus b1;
    return 0;
}