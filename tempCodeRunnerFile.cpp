//GIVEN A CLASS RECTANGLE WITH  2 ATTRIBUTES LENGTH AND BREATH WITH METHOD TO CALCULATE
// AREA AND PARAMETER OF RECTANGLE ALSO
// DEMONSTRATE THE USE  THESE METHOD IN A SAMPLE PROGRAM
//in the above que create a cuboid class which is the drived class if the rectangle class 
//the cuboid class should have one member only that is height also write a fun to find
//the volume of the cuboid 
//note that bcz of inheritance length & breath is already given
//what are the changes need to bedone in rectangle class for this new task
#include<iostream>
using namespace std;
class rectangle
{
    public:
   //protected:
    int length,breath;
    rectangle()
    {
        cout<<"-----default constructor called-------";
        length=breath=1;
    }
    rectangle(int x,int y)
    {
        cout<<"----parameterised constructor called---";
        length=x;
        breath=y;
    }
    void area()
    {
        int area=length*breath;
        cout<<"area of rectangle="<<area<<endl;
        
    }
    void parameter()
    {
        int parameter=2*(length+breath);
         cout<<"parameter of rectangle="<<parameter<<endl;
    }
};

class cuboid: public rectangle
{
 //protected
 public:
 int height;
 cuboid()
 {
 height=1;
 }
 cuboid(int x,int y,int z):rectangle(length,breath)
 {
   // length=x;
    //breath=y;
    height=z;
 }
 int volume()
 {
    int volume=length*breath*height;
    cout<<"volume of cuboid="<<volume<<endl;
 
 cout<<"\n";
 }
};

int main()
{
    cuboid c1(2,3,4);
    c1.volume();
    //c1.area();
   // c1.parameter();

}