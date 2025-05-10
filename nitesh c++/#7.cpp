//write a program to using multiple inheritence
#include<iostream>
#include<conio.h>
using namespace std;
class base1{
    private:
    int a,b,c;
    public:
    void input(){
        cout<<"enter the value of base1 a and b:-\n";
        cin>>a>>b;
    }
    void show(){
        c=a+b;
        cout<<"total sum of class base1:"<<c;
    }  
};

class base2{
    private:
    int a,b,c;
    public:
    void input1(){
        cout<<"\nenter the value of base2 a and b:-";
        cin>>a>>b;
    }
    void show1(){
        c=a-b;
        cout<<"total subtraction of class base2:"<<c;
    }  
};
class derive:public base1,public base2
{
       private:
    int a,b,c;
    public:
    void input2(){
        cout<<"\nenter the value of derive a and b:-";
        cin>>a>>b;
    }
    void show2(){
        c=a*b;
        cout<<"total multiplication of class derive:"<<c;
    } 
};
 main()
{
    base1 ob;
    ob.input();
    ob.show();
    base2 ob1;
    ob1.input1();
    ob1.show1();
    derive ob3;
    ob3.input2();
    ob3.show2(); 

getch();

}