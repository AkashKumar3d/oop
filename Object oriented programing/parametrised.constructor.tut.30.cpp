#include<iostream>
using namespace std;
class complex {
    int a,b;
public:
    complex(int,int);
    void printnumber() {
        cout<<"your no is"<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(int x,int y)//paramitarised constructor
{
    a=x;
    b=y;
}
int main()
{
    complex a(4,6);
    a.printnumber();
    complex b=complex(4,7);
    b.printnumber();

    return 0;
}