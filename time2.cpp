#include <iostream>
using namespace std;
#include "ccc_time.h"
int main()
{
    time now;
    time day_endl(23,59,59);
    long seconds_left=day_endl.seconds_from(now);
    cout<<"There are"<<seconds_left<<"seconds left in this day.\n";
    return 0;
}
