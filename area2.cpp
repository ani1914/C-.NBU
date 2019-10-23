#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double area;
    cout<<"PLEASE enter the area of a square";
    cin>>area;
    if(area>=0)
    {
        cout<<"The side length is"<<sqrt(area)<<"\n";
        return 1;
    }
        else
        {


            cout<<"Error: Negative area.\n";
        return 1;
    }
    return 0;
}
