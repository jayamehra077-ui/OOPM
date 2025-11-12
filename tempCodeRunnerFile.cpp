#include<iostream>
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
    }
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