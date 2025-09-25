#include<iostream>
using namespace std;
class cars
{
    public:
    void startengine()
    {
        cout<<"engine started"<<endl;
    }
};
class driver
{
    public:
    void drive(cars &car)
    {
        car.startengine();
        cout<<"car is being drive"<<endl;
    }

};
int main()
{
    cars mycar;
    driver Driver;
    Driver.drive(mycar);
    return 0;

}