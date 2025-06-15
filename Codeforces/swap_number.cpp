#include<iostream>
using namespace std;

int x,y;
void swap_number()
{
    int temporary_variable;
    temporary_variable = x;
    x = y;
    y = temporary_variable;
}
int main()
{

    cin>>x>>y;
    swap_number();
    cout<< x <<' '<< y <<endl;
    return 0;
}
