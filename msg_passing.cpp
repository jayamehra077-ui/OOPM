#include<iostream>//msg passsing .c++ 
//impliments msg passing by inavling us 
//to controlone object from another by
// passing msg or values
using namespace std;
class tv
{
    //public:
    private:
    bool ison;
    public:
    void control(bool x)
    {
        ison=x;
    }
    void getsetup()
    {
        if(ison )
        {cout<<"tv is on";
        }
        else{
            {cout<<"tv is off";
        }
        }
    }//crt another variable int vol. in tv class private
    //crt a func that increases and dec the vol 
    //assume that the initial vaolume of tv is 0


    //crt a method in  remote class 
    //that can control the volume of tv
};
class remote
{
    public:
    void controltv(tv &a,bool x)
    {
        a.control(x);
    }
};
int main()
{
    tv t1;
    remote r1;
    r1.controltv(t1,true);
}