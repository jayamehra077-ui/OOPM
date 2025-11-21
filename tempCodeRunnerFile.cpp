//GIVEN A CLASS RECTANGLE WITH  2 ATTRIBUTES LENGTH AND BREATH WITH METHOD TO CALCULATE
// AREA AND PARAMETER OF RECTANGLE ALSO
// DEMONSTRATE THE USE  THESE METHOD IN A SAMPLE PROGRAM
#include<iostream>
using namespace std;
class rectangle
{
    public:
    int length,breath;
    rectangle()
    {
        //length=breath=1;
    }
    rectangle(int x,int y)
    {
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
int main()
{
  rectangle r1(5,4);
  r1.area();
  r1.parameter();  
}