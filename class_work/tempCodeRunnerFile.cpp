#include<iostream>
using namespace std;
class myfriend
{
    public:
virtual void myshoes()=0;
};
class me:public myfriend{
public:
virtual void myshoes()override{//2 classes access the same func
    cout<<"THERE ARE MY SHOES NOW"<<endl;
}
};
int main()
{
    me m1;
    m1.myshoes();
}