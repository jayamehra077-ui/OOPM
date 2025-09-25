#include<iostream>
using namespace std;
class animal
{
    public:
void eat()
{
    cout<<"ANIMAL IS EATING"<<endl;
}
};
class mammal:public animal
{
    public:
    void bird()
    {
    cout<<"BIRD IS FLYING"<<endl;
    }
};
int main()
{
    mammal m1;
    m1.eat();
    m1.bird();
    return 0;
}