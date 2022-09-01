#include<iostream>
using namespace std;
class bankdeposit {
    int principal;
    int year;
    float intrestrate;
    float returnvalue;
public:
    bankdeposit() {}
    bankdeposit(int p,int y,float r);
    bankdeposit(int p,int y,int r);
    void show();

};
bankdeposit::bankdeposit(int p,int y,float r) {
    principal=p;
    year=y;
    intrestrate=r;
    returnvalue=principal;
    for(int i=0; i<y; i++)
    {
        returnvalue=returnvalue*(1+intrestrate);
    }
}
bankdeposit::bankdeposit(int p,int y,int r) {
    principal=p;
    year=y;
    intrestrate=float(r)/100;
    returnvalue=principal;
    for(int i=0; i<y; i++)
    {
        returnvalue=returnvalue*(1+intrestrate);
    }
}
void bankdeposit show() {
    cout<<endl<<"principal amount was"<<principal
        <<"return value after"<<year
        <<"year is"<<returnvalue<<endl;
}
int main()
{
    bankdeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout << "enter the value of p,yand r"<<endl;
    cin>>p>>y>>r;
    bd1=bankdeposit(p,y,r);
    bd1.show();
    cout << "enter the value of p,yand R"<<endl;
    cin>>p>>y>>R;
    bd1=bankdeposit(p,y,R);
    bd2.show();
    return 0;
}