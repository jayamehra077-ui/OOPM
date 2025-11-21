#include<iostream>//ambiguity=confusion.
using namespace std;
class car
{
    public:
    string fueltype;
    car()
    {

    }
    void start()
    {
        cout<<"----car start!!!!!!!!-----";
    }
    void stop()
    {
         cout<<"----car stop!!!!!!!-----";
    }
};
class familyCar:public car
{
     
};
class sportsCar:public car
{

};
class suv:public familyCar,public sportsCar
{
  
};
int main()
{
    suv s1;
    //s1.fueltype="petrol";
    ////------ERROR-------
    //s1.start();
    //s1.stop();
    s1.familyCar::fueltype="petrol";
}