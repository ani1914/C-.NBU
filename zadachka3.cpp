
#include <iostream>

using namespace std;

double M[]={50,20,10,5,2,1,0.5,0.2,0.1,0.05,0.02};
double br=0;

void print(double s)
{
     if (br++)
     cout<<" + ";
     cout<<s;
}

double resto(double r, int ix)
{
     while (r>=M[ix])
     {
         print(M[ix]);
         r-=M[ix];
     }
     if (r==0)
    {
        cout<<endl;
        return 1;
    }
     resto(r, ix+1);
}

int main()
{
    cout<<"kolko dava klienta\n";
    double iskash;
    cin>>iskash;
    cout<<"kolko mu e smetkata\n";
    double  davash;
    cin>>davash;
    double total= iskash-davash;
    cout<<"Resto="<<total<<"\n";

    double r= iskash-davash;
    cout<<"Resto="<<r<<"\n";

    if (r>0) resto(r,0);
    if (br==1) cout<<"1 moneta\n";
    else cout<<br<<" moneti\n";
    return 0;
}
