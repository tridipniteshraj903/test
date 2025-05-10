//write a program to inline function
#include<iostream>
using namespace std;
 inline float mul(float x,float y)
 {
    return(x*y);
 }
 inline float div(float p,float q)
 {
    return(p/q);
 }
 int main()
 {
    float a=3.25;
    float b=7.890;
    cout<<mul(a,b)<<endl;
    cout<<div(a,b)<<endl;
    return 0;
 }