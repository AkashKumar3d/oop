#include<iostream>
using namespace std;
class complex{
int a,b;
public:
complex(int x,int y){
a=x;
b=y;
}
complex(int x){
a=x;
b=0;
}
void printnumber(){
cout<<"your no is"<<a<<"+"<<b<<"i"<<endl;
}
};
int main()
{
complex c1(4,7);
c1.printnumber();
complex c2(6);
c2.printnumber();

    
    return 0;
}