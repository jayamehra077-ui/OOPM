#include<iostream>
using namespace std;
class myclass
{
    int x;
    float y;
    public:
    myclass()
    {
        x=1;
        y=2;
    }
    myclass(const myclass &a)
    {
        x=a.x;
        y=a.y;
    }
    void display()
    {
        cout<<"x="<<x<<"y="<<y<<endl;
    }
};
int main()
{
    myclass m1;
    m1.display();
    //using the copy constructor to create new object as copy of m1
    myclass m2=m1;
    m2.display();
    return 0;
}