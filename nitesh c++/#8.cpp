//write a program multilevel inheritence
#include<iostream>
using namespace std;
class base{
    private:
    int a;
    public:
    void input(){
        cout<<"enter the value of base class:";
        cin>>a;
    }
    void show(){
        cout<<"value of base class:"<<a;
    }
};
class derive:public base
{
     private:
    int b;
    public:
    void input1(){
        cout<<"enter the value of derive1 class:";
        cin>>b;
    }
    void show1(){
        cout<<"value of derive class:"<<b;
    }   
};
class derive1:public derive
{
    private:
    int c;
    public:
    void input2(){
        cout<<"enter the value of derive2 class:";
        cin>>c;
    }
    void show2(){
        cout<<"value of derive2 class:"<<c;
    }
};
main()
{
    base ob;
    ob.input();
    ob.show();
    derive dr;
    dr.input1();
    dr.show1();
    // deraive1 dr1;
    // dr1.input2();
    // dr1.show2();
}