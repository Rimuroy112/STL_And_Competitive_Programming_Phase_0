#include<iostream>
using namespace std;
int main()
{
    int n = 6;
    int a[n] = {1,2,3,4,5,6};
    for(int i=0; i<n/2; i++)
    {
        int j = n-i-1;
        swap(a[i],a[j]);
    }

    for(int i=0; i<n; i++)
    {
        cout<< a[i] << ' ';
    }
}
