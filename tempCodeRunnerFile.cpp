//write a c++ program to demonstrate dynamic polymorphism & dynamic dispatch
//dynamic dispatch means jo base class k through call hua h wah run time show hoga
#include<iostream>
using namespace std; 
class appliance
{
  public:
 virtual void start()
  {
cout<<"---GENERIC APPLIANCE---"<<endl;
  }
};
class toaster:public appliance
{
    public:
    void start()
  {
    cout<<"--TOASTER COILS HEATING UP--"<<endl;
  }
};
class oven:public appliance
{
    public:
    void start()
  {
    cout<<"--OVEN PREHEATING--"<<endl;
  }
};
void run_appliance(appliance*ptr)
{
  ptr->start();
}
int main()
{
    appliance*obj1=new toaster;
    appliance*obj2=new oven;
    run_appliance(obj1);
    run_appliance(obj2);
    {

    }
}