#include<iostream>
using namespace std;
int c=7;

int main()
{
int a,b,c;
    cout << "enter value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;
    c=a+b;
    cout<<"the sum of two numbers is "<<c<<endl;
    cout<<" global c is"<<::c;
    return 0;
}