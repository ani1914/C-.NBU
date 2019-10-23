#include <iostream>

using namespace std;

double M[]={50,20,10,5,2,1,0.5,0.1,0.05,0.01};
double br=0;

void print(double s)
{
     if (br++) cout<<" + ";
     cout<<s;
}

double resto(double r, int ix)
{
     while (r>=M[ix])
     {
         print(M[ix]);
         r-=M[ix];
     }
     if (r==0) {cout<<endl;
     return 1;}
     resto(r, ix+1);
}

int main()
{
    double r;

    cout<<"Resto = ";
    cin>>r;
    if (r>0) resto(r,0);
    if (br==0) cout<<"0 moneta\n";
    else cout<<br<<" moneti\n";
    return 0;
}



