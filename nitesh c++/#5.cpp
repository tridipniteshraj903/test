//write a programm with using the ::operater
#include<iostream>
using namespace std;
int m=60;
int main()
{
    int m=40;
    {
        int k=m;
        int m=50;
        cout<<"we are in enar block"<<endl;
        cout<<"k="<<k<<endl;
        cout<<"m="<<m<<endl;
        cout<<"::m="<<::m;

    }
    cout<<"we are in outer block"<<endl;;
    cout<<"m="<<m<<endl;
    cout<<"::m"<<::m;

}