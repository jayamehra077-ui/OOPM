#include<iostream>
using namespace std;
int volume(int a,int b,int c)
{
    return a*b*c;
}
float volume(int r)
{
    return (4/3)*3.14*r*r*r;
}
int main()
{
    
    cout<<"THE VOLUME OF SPHERE IS:"<<volume(5)<<endl;
    cout<<"THE VOLUME OF CUBOID IS:"<<volume(5,4,3)<<endl;
    return 1;
}