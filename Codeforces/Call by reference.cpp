#include<iostream>
using namespace std;

void swap_value(int &a,int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a = 10, b = 20;
    swap_value(a,b);
    cout<<a<<' '<<b<<endl;

    return 0;
}
