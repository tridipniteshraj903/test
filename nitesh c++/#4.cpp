//right a programm using class
#include<iostream>
#include<conio.h>
using namespace std;
class  person
{
        char name[9];
        int age;
    public:
        void getdata(void);
        void display(void);
};
void person::getdata(void)
{
    cout<<"enter the name="<<endl;
    cin>>name;
    cout<<"enter the age="<<endl;
    cin>>age;
}
 void person::display(void)
    {
        cout<<"name is:"<<name<<endl;
        cout<<"age is :"<<age;
    }
    main()
    {
        person p;
        p.getdata();
         p.display();
         getch();
         return 0;
    }        