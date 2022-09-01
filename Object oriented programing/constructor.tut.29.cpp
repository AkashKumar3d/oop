#include<iostream>
using namespace std;
class complex {
    int a,b;
public:
    complex (void);//constructor declearation
    void printnumber() {
        cout<<"your no is"<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(void)//default argument
{
    a=10;
    b=30;
}
int main()
{
    complex c1,c2,c3;
    c1 . printnumber();
    c2 . printnumber();
    c3 . printnumber();

    return 0;
}