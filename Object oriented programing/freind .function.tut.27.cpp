#include<iostream>
using namespace std;
class complex {
    int a,b;
public:
    void setnumber(int n1,int n2) {
        a=n1;
        b=n2;
    }
    freind complex sumcomplex(complex o1 ,complex o2);
    void printnumber() {
        cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex sumcomplex(complex o1,complex o2) {
    complex o3;
    o3.setnumber((o1.a+o2.b),(o2.a+o2.b));
    return o3;
}
int main()
{   complex d1,d2,sum;
    d1.setnumber(5,7);
    d1.printnumber();
    d2.setnumber(4,8);
    d2.printnumber();
    sum=sumcomplex(d1,d2);
    sum.printnumber();
    return 0;
}