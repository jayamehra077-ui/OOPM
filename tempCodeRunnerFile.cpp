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
        cout<<"\n";
    }
    void stop()
    {
         cout<<"----car stop!!!!!!!-----";
          cout<<"\n";
    }
};
class familyCar:virtual public car
{
     
};
class sportsCar:virtual public car
{

};
class suv:public familyCar,public sportsCar
{
  
};
int main()
{
    suv s1;
    s1.fueltype="petrol";
    ////------ERROR-------
    s1.start();
    s1.stop();
}