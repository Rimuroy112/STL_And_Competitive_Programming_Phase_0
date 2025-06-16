#include<iostream>
using namespace std;
int main()
{
    int a[] = {0,10,20,30,40};
    for(int i=0; i<5; i++)
    {
        cout<<&a[i]<<endl;
    }
    cout<<endl;
    int *ptr;
    ptr = a;
    cout<<ptr<<endl;

    return 0;
}
