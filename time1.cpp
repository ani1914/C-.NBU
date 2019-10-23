#include <iostream>
using namespace std;
#include "ccc_time.h"
int main()
{
    Time wake_up(8,0,0);
    wake_up.add_seconds(1000);
    cout<<wake_up.get_hours()<<:<<wake_up.get_minute()<<:<<wke_up.get_seconds()<<"\n";
    return 0;
}
