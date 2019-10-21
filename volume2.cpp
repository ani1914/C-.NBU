#include <iostream>
using namespace std;
int main()
{
    const double BOTTLE_VALUE=2.0;
    const double CAN_VALUE=0.355;
    double bottles;
    cout <<"Haw many"<<BOTTLE_VALUE<<"litters bottles do you have?";
    cin>>bottles;
    double can;
    cout<<"How many"<<CAN_VALUE<<"litters can do you have?";
    cin>>can;
    double total=can*CAN_VALUE+bottles*BOTTLE_VALUE;
    cout<<"Total value"<<total<<"litters.\n";
    return 0;

}

