#include <iostream>
#include <algorithm>
using namespace std;
//������ ���� �� ��� ����� � ������� ������� �� ������������� �����
//param x ����� � ������� �������
//param y ����� ����� � ������� �������
//return �����, ��� x � y �� ������������� �����
bool approx_equal(double x, double y)
{
    const double EPSILON=1E-14;
    if(x==0) return fabs(x)<=EPSILON;
    if(y==0) return fabs(y)<=EPSILOS;
    return fabs(x-y)/ max(fabs(x),fabs(y))<=EPSILON;
}
int main()
{
    double x;
    cout<<"Enter a number\n";
    cin>>x;
    double y;
    cout<<"Enter another number\n";
    cin y;
    if(approx_equal(x,y))
        cout<<"The number are approximately equal.\n";
    else
        cout<<"The number are different,\n";
        return 0;
}
