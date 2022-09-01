#include<iostream>
using namespace std;
class simple{
int data1;
int data2;
public:
simple(int a,int b=2){
data1=a;
data2=b;
}

void printdata();
};
void simple::printdata(){
cout<<"the value of data2 is"<<data1<<"and"<<2<<endl;
}
int main()
{
simple s(1);
s.printdata();

    
    return 0;
}