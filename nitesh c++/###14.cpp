#include<iostream>
using namespace std;
int count=0;
class alpha 
{
    public:
    alpha()
    {
        count++;
        cout<<"\n no of object created"<<count;
    }
    ~alpha()
    {
        cout<<"\n no of object destroyed "<<count;
        count--;
    }
};
int main()
{
    cout<<"\n\nenter main\n";
    alpha a1,a2,a3,a4;
    {
        cout<<"\n\nenter block\n";
        alpha a5;
    }
    {
        cout<<"\n\nenter block2\n";
        alpha a6;   
    }
    cout<<"\n\n reenter main\n";
    return 0;
}