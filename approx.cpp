#include <iostream>
#include <algorithm>
using namespace std;
//Тества дали са две числа с плаваща запетая са приблизително равни
//param x число с плаваща запетая
//param y друго число с плаваща запетая
//return вярно, ако x и y са приблизително равни
bool approx_equal(double x, double y)
{
    const double EPSILON=1E-14;
    if(x==0) return fabs(x)<=EPSILON;
    if(y==0) return fabs(y)<=EPSILOS;
    return fabs(x-y)/ max(fabs(x),fabs(y))<=EPSILON;
}
int main()
{
    double x;
    cout<<"Enter a number\n";
    cin>>x;
    double y;
    cout<<"Enter another number\n";
    cin y;
    if(approx_equal(x,y))
        cout<<"The number are approximately equal.\n";
    else
        cout<<"The number are different,\n";
        return 0;
}
