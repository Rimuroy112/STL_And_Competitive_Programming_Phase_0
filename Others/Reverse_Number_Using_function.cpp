#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n = 6;
    int a[n] = {1,2,3,4,5,6};
    reverse(a, a+n);
    for(int i=0; i<n; i++)
    {
     cout<< a[i] <<' ';
    }
}
