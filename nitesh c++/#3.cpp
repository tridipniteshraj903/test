#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
cout<<"enterthe value of a="<<endl;
cin>>a;
cout<<"enterthe value of b="<<endl;
cin>>b;
cout<<"enterthe value of c="<<endl;
cin>>c;
if(a>b&&a>c)

{
    cout<<"a is largest";
}
else if(b>a&&b>c)
{
    cout<<"b is largest";
}
else  if (c>a&&c>b)
{
    cout<<"c is largest";
}
else 
{
    cout<<"all num are same";
}
return 0;
}