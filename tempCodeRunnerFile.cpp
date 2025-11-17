#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    static int count;
    student(string n):name(n)
    {
        count++;
        cout<<"student created:"<<count<<endl;
    
    }
};
int student::count=0;//initialization of static variable
int main()
{

    student  s1("JAYA");
    student  s2("RISHIKA");
    student  s3("SHANTI");
    student  s4("PRIYA");
}