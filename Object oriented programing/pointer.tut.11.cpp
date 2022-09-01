#include<iostream>
using namespace std;

int main()
{
int a=5;
int *b=a;
int a=*b;
    cout << "the address of a is "<<a<<endl;
    cout << "the address of b is "<<b<<endl;
    cout << "the the value  of b is "<<*b<<endl;
    return 0;
}