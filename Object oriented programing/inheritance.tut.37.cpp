#include<iostream>
using namespace std;
//base class
class employee {
public:
    int id;
    float salary;
    employee(int inpid) {
        id=inpid;
        salary=150.0;
    }
    employee() {}
};
//creating a program class derived from employee base class
class programmer:public employee {
public:
    programmer (int inpid) {
        id = inpid;
    }
    int languagecode=9;
    void getdata() {
        cout<<id<<endl;
    }
};
int main()
{
    employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;

    programmer skillf(10);

    cout<<skillf.id<<endl;
    cout<<skillf.languagecode<<endl;
    skillf.getdata();

    return 0;
}