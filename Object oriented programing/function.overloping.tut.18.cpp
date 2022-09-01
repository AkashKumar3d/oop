#include<iostream>
using namespace std;


    int sum(int a,int b){
    cout<<"using the function with two arguments"<<endl;
    return a+b;
    
    }
    int sum(int a,int b,int c){ 
    cout<<"using the function of three argument"<<endl; 
    return a+b+c;  
    
        }
        int main()
{
cout<<"the sum of 5and7 is"<<sum(5,7)<<endl;
cout<<"the sum of three number 4,5,6is"<<sum(4,5,6)<<endl;
    return 0;
}