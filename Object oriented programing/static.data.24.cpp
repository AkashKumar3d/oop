#include<iostream>
using namespace std;
class employee {
    int id;
    static int count;
public:
    void setdata(void) {
        cout<<"enter the id no "<<endl;
        cin>>id;
        count++;
    }
    void getdata(void) {
        cout<<"the id of this employee is "<<id<<"and this is the employee number"<<count<<endl;
    }
    static void getcount (void) {
        cout<<"the value of count is"<<count<<endl;
    }
};
int employee::count=0;
int main()
{
    employee harry,mohan,lovish;
    harry.setdata();
    harry.getdata();
    employee::getcount();

    mohan.setdata();
    mohan.getdata();
    employee::getcount();

    lovish.setdata();
    lovish.getdata();
    employee::getcount();

    return 0;
}