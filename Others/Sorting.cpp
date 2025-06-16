#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n=6;
    int a[n] = {2,1,4,3,5,6};
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        cout<< a[i] <<' ';
    }
}
