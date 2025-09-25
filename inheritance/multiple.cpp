#include<iostream>
using namespace std;
class mother
{
public:
void eye()
{
    cout<<"EYE COLOR IS BLUE"<<endl;
}
};
class father
{
public:
void skin()
{
    cout<<"SKIN COLOR IS BROWN"<<endl;
}
};
class child:public mother,public father
{
public:
void result()
{
    cout<<"THE CHILD LOOK LIKE"<<endl;
}
};
int main()
{
    child c1;
    c1.eye();
    c1.skin();
    c1.result();
    return 0;
}
