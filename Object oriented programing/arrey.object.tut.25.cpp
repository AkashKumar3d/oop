#include<iostream>
using namespace std;
class employee {
    int id;
    int sallary;
public:
    void setid(void) {
        sallary=12000;
        cout<<"enter the id of this employee"<<endl;
        cin>>id;
    }
    void getid(void) {
        cout<<"the id of this employee is "<<id<<"and the salary is"<<sallary<<endl;
    }
};
int main()
{
    employee fb[4];
    for(int i=0; i<4; i++) {
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}