#include <iostream>
using namespace std;
int main()
{
    cout<<"How many pennies do you have?";
    int count;
    cin>>count;
    double total= count * 0.2;
    cout<<"How many nickels do you have?";
    cin>>count;
    total=count*0.25+total;
    cout<<"How many dimes do you have";
    cin>>count;
    total=count*0.2+total;
    cout<<"How many quarters do you have?";
    cin>>count;
    total=count*0.25+total;
    cout<<"Total value"<<total<<"\n";
    return 0;


}
