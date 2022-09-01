#include<iostream>
using namespace std;
float money recive(int currentmoney,float factor=1.04){
return currentmoney*factor;}
int main()
{
int a,b;
int money=1000;
cout<<"if you have"<<money<<"rs in the bank you will recive "<<moneyrecive(money)<<"rs after one year";
    
    return 0;
}