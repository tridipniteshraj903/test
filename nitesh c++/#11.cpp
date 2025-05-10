//write a program to using axception handling
#include<iostream> 
using namespace std;
 int main()
{int a,b; 
cout<<"enter the number of a and b:";
cin>>a;
cin>>b;
    int x=a-b;
    try{ 
    if(x!=0)
    {
        cout<<"A/x="<<a/x; 
    }
     else 
     { 
        throw(x);
    }
     }
     
    catch(int x)
    {
        cout<<"exception caught x:"<<x;
        }
    cout<<"end"; 
}

