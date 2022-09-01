#include<iostream>
using namespace std;
class employee{
private :
int a,b,c;
public:
int d,e;
void set data(int a1,int b1,int c1);
void get data ()
cout<<"the value of a is "<<a<<endl;
cout<<"the value of b is "<<b<<endl;
cout<<"the value of c is "<<c<<endl;
cout<<"the value of d is "<<d<<endl;
cout<<"the value of e is "<<e<<endl;
};
void employee::set data(int a1,int b1,int c1);
{
a=a1;
b=b1;
c=c1;};
int main()
{
employee.akash;
akash.set data(1,2,3);
akash.get data();
akash.d=25;
akash.e=39;
    return 0;
}