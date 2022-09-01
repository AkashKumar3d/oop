#include<iostream>
using namespace std;
union money{
int rice;
char ch;
float pound;
};
int main()
{
union money m1;
m1.rice=39;
cout<<m1.rice<<endl;
    return 0;
}