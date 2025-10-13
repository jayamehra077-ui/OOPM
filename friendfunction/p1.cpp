#include<iostream>
using namespace std;
class two;
class one
{
    int data;
    public:
    void input(int value)
    {
        data=value;
    }
    friend void add(one ,two);
};
class two
{
    int data;
    public:
    void input(int value)
    {
        data=value;
    }
 friend void add(one ,two );

};
void add(one obj1,two obj2)
{
   cout<<"sum:"<<obj1.data+obj2.data<<endl;
}
int main()
{
    one A;
    two B;
    A.input(30);
    B.input(70);
    add(A,B);
    return 0;
}