#include<iostream>
using namespace std;
class integer
{
    int m,n;
public:
    integer(int,int);
    void display(void)
    {
        cout<<"m"<<m<<"\n";
        cout<<"n"<<n<<"\n";
    }
};
integer::integer(int x,int y)
{
m=x;
n=y;
}
int main()
{
    integer int1(0,100);
    integer int2(75,15);
    cout<<"\nobject1:"<<"\n";
    int1.display();
    cout<<"\nobject2:"<<"\n";
    int2.display();
    return 0;
}