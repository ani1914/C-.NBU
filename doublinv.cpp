#include <iostream>
using namespace std;
int main()
{
    double rate=5;
    double initials_balance=10000;
    double balance=initials_balance;
    int moth=0;
    while(balance<2*initials_balance)
    {
        balance=balance*(1+rate/100/12);
        moth ++;
        }
        int years=moth/12;
        cout<<"The investment doubled after"<<years<<"year,\n";
        return 0;
}
