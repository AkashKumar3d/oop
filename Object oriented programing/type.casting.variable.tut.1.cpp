#include<iostream>
using namespace std;
/*type casting means it is convert 
one deta type to another
 data type*/
int main()
{
int a=46;
float b=46.42;
cout<<"the value of a is"<<(float)a<<endl;
cout<<"the value of a is"<<(float)a<<endl;
cout<<"the value of b is"<<(int)b<<endl;
cout<<"the value of b is"<<(int)b<<endl;
cout<<"the expression is"<<a+b<<endl;
cout<<"the expression is"<<a+(int)b<<endl;
cout<<"the expression is"<<a+int(b)<<endl;
    return 0;
}