#include<iostream>
using namespace std;
class parent
{
public:
int n;
void print()
{
    cout<<n<<endl;
}
};
class child:public parent
{
public:
void input()
{
    n=4;

}
};
int main()
{
    child x;
    x.input();
    x.print();
    return 0;
}