#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float price;
    float paid;
    int change;
    cin>>price>>paid;
    change= paid-price;

    int left=change;
    int unitValues[]={5000,2000,1000,50,200,100,50,20,10};

         cout<< fixed <<setprecision(2);
         cout<<"Change:"<<change/100.0<< "BGN"<<endl;
         int unit=0;
         while(left>0){
    int unitCount = left / unitValues[unit];
    left%=unitValues[unit];
    if(unitCount>0)
        cout<<unitCount<<"x"<<unitValues[unit]/100.0<<"BGN";
        unit++;
        }
    return 0;
}
