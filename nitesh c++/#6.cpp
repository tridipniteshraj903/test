//write a program to using single inheritence..!
#include<iostream>
using namespace std;
class father{
    protected:
    string surname="kumar";
};
class son:father{
    string name="gautam";
    public:
    void show(){
        cout<<name<<" "<<surname;
    }
};

main()
{
 son s;
 s.show();
}
