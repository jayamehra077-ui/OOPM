#include<iostream>
using namespace std;
class animal
{
public:
void eat()
{
    cout<<"this animal eat foot"<<endl;
}
};
class mammal:public animal
{
    public:
void walk()
{
    cout<<"this mammal walk on land"<<endl;
}
};
class dog:public mammal{
    public:
    void bark()
    {
        cout<<"the dog bark"<<endl;
    }
};
int main()
{
    dog d1;
    d1.eat();
    d1.walk();
    d1.bark();
    return 0;
}
