#include<iostream>
using namespace std;
class myclass
{
    int age;
    string name;
    myclass(int a,string s)
    {
     age=a;
     name=s;
    }
     myclass(const myclass &s)
     {
      age=s.age;
      name=s.name;
     }
     void display()
     {
        cout<<"age is="<<age<<"name="<<name<<endl;
     }
};
int main()
{
    myclass obj1(19,"jaya");
    myclass obj2(obj1);
}