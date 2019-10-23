#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double area;
    cout<<"Place enter the area of a square";
    cin>>area;
    if(area<0)
    {
        cout<<"Error: Negative area.\n";
        return 1;

    }
    if(area>=0)
    {
        double length=sqrt(area);
        cout<<"The side length of the square is"<<length<<"\n";
        return  1;
    }
        return 0;
}
