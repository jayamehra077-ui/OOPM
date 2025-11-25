//write a c++ program to demonstrate dynamic polymorphism & dynamic dispatch
//dynamic dispatch means jo base class k through call hua h wah run time show hoga
#include<iostream>
using namespace std; 
class appliance
{
  public:
  appliance()
  {
    cout<<"---APPLIANCE CREATED---"<<endl;
  }
  ~appliance()
  {
     cout<<"---APPLIANCE DESTROYED---"<<endl;
  }
};
class toaster:public appliance
{
    public:
  toaster()
  {
    cout<<"---TOASTER CREATED---"<<endl;
  }
  ~toaster()
  {
     cout<<"---TOASTER  DESTROYED---"<<endl;
  }
};
class oven:public appliance
{
    public:
 oven()
  {
    cout<<"---OVEN CREATED---"<<endl;
  }
  ~oven()
  {
     cout<<"---OVEN DESTROYED---"<<endl;
  }
};

int main()
{
  //appliance*obj;//=new toaster;
  oven obj;

}