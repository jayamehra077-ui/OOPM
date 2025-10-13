#include<iostream>
using namespace std;
class two
{

};
class one
{
    friend class two;
    int a=24;
    public:
    void show()
    {
        cout<<"THIS IS CLASS ONE"<<endl;
    }
    void accessOnePrivate(one &obj)
    {
        cout<<"ACCESSING PRIVATE DATA OF CLASS ONE FROM CLASS TWO"<<endl;
    }
};
class two
{
    friend class one;
    public:
    void accessOnePrivate(one &obj)
    {
        cout<<"ACCESSING PRIVATE DATA OF CLASS ONE FROM CLASS TWO"<<endl;
    }
};
int main()
{
    one o1;
    two o2;
     o2.accessOnePrivate(o1);
}