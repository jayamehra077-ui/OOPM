#include<iostream>
using namespace std;
class Hero
{
 protected:
 int power;
 public:
 void set_power(int p)
 {
    power=p;
 }
  int get_power()
  {
    return power;
  }
};
class Villan
{
    protected:
    int power;
public:

void set_power(int p)
 {
    power=p;
 }
  int get_power()
  {
    return power;
  }
};
class Comparision:private Hero,private Villan
{
public:
void power_comp(Hero &H,Villan &V)
{
    if(H.get_power()>V.get_power())
    {
    cout<<"HERO IS STRONGER THAN VILLAN"<<endl;
    }
    else
    {
        cout<<"VILLAN IS STRONGER THAN HERO"<<endl;
    }
}

};
int main()
{
    Hero H1;
    H1.set_power(160);
    Villan v1;
    v1.set_power(180);
    Comparision c1;
    c1.power_comp(H1,v1);
}