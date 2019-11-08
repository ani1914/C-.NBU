#include <iostream>
#include<limits>
#include<cassert>
using namespace std;
const int maxInt=numeric_limits<int>:: max();
double add(int x, int y){
    cout<<""<<maxInt<<endl;
    if(x>maxInt-y){
        cout<<"Error: overflow!"<<endl;
    }

return x+y;
}

double substract(int x, int y){
return x-y;}

double multiply(int x, int y){
return x*y;}

double devide(int x, int y){
    if(y==0){
        cout<<"Error: division by zero!"<<endl;
        return 0;
    }
return(double) x/y;}

double calculate(int x,int y,char op){
if(op=='+'){
    return add(x,y);
}
else if (op == '-'){
return substract(x,y);}

else if (op == '*'){
return multiply(x,y);}

else if (op == '/'){
return devide(x,y);}

else{ cout<<"Error"<<op<<endl;
return 0;}
return 0;}


   int main(int argc, char const*argv[]){
       assert(calculate(5,2,'+')==7);
       assert(calculate(5,2,'-')==3);
       assert(calculate(5,2,'*')==10);
       assert(calculate(5,2,'/')==2.5);

       int x,y;
       char op;
       while(cin>>x>>op>>y){
            double result=calculate(x,y,op);
            cout<<x<<op<<y<<"="<<result<<endl;



       }


       return 0;

}


