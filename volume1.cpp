#include <iostream>
using namespace std;
int main()
{
    double bottles;
    cout<<"How many 2-liter bottles do you have?";
    cin>>bottles;
    double cans;
    cout<<"How many cans do you have?";
    cin>>cans;
    double total=bottles*2+cans*0.355;
    cout<<"Total value="<<total<<"litter.\n";
    return 0;


}
