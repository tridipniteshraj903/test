//write a program constructor
#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
       int n=10;
        cout<<n;
    }
    ~test()
    {
        cout<<"object destroyed";

    }

    
};
 main()
{
    test ob;
    return 0;
}