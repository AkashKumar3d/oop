#include<iostream>
using namespace std;
typedef struct employee{
int id;
char favchar;
float sallary;
}ak;
union money{
int rice;
char car;
float pound;
};

int main()
{
ak akash;
akash.id=1;
akash.favchar='y';
akash.sallary=10000000;
cout<<"the value is"<<akash.id<<endl;
cout<<"the value is"<<akash.favchar<<endl;
cout<<"the value is "<<akash.sallary<<endl;
//union
union money m1;
m1.rice=39;
cout<<m1.rice<<endl;
    return 0;
}