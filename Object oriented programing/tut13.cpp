#include<iostream>
using namespace std;

int main()
{
int marks[4]={30,45,69,80};
int math_marks[4];
math_marks[0]=225;
math_marks[1]=367;
math_marks[2]=456;
math_marks[3]=123;

cout<<" the mark is"<<endl;
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
cout<<"the maths marks is "<<endl;
//cout<<math_marks[0]<<endl;
//cout<<math_marks[1]<<endl;
//cout<<math_marks[2]<<endl;
//cout<<math_marks[3]<<endl;
 /*  using the loop*/
for( int i=0;i<4;i++){
cout<<"the math marks "<<i<< " is "<<math_marks[i]<<endl;
}
//pointer to array
int* p=marks;
cout<<"tha value of *p is"<<*p<<endl;
cout<<"tha value of *(p+1) is"<<*(p+1)<<endl;
cout<<"tha value of *(p+2) is"<<*(p+2)<<endl;
cout<<"tha value of *(p+3) is"<<*(p+3)<<endl;

    return 0;
}