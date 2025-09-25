#include<iostream>
using namespace std;
class x
{
public:
int plusFunc(int x,int y)
{
return x+y;
}
double plusFun(double x,double y)
{
    return x+y;
}
int plusFunc(int x,int y,int z)
{
    return x+y+z;
}
};
int main()
{
    x a1;
    int sum=a1.plusFunc(2,4);
    double sum1=a1.plusFunc(30.4,30.4);
    int sum2=a1.plusFunc(20,90,50);
    cout<<"int:"<<sum<<"\n";
    cout<<"double:"<<sum1<<"\n";
    cout<<"int"<<sum2<<"\n";
    return 0;
}