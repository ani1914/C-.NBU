#include <iostream>
#include<math.h>
using namespace std;
double future_vlue(double p)//definiciq za funkciq
{
    double b=1000*pow(1+p/100,10);//formula za slojna lihva
    return b;
}
int main()
{
    cout<<"Place enter the interest rate in percent\n";
    double rate;
    cin>>rate;
    double balance=future_vlue(rate); // izvikvane na funkciqta
    cout<<"After 10 years, the balance is\n"<<balance<<"\n";
    return 0;

}



