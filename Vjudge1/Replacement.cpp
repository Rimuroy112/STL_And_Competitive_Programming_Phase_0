#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(a[i] > 0)
        {
            cout << 1 <<' ';
        }
        else if(a[i] < 0)
        {
            cout << 2 <<' ';
        }
        else
        {
            cout << 0<<' ';
        }
    }
    cout<<endl;
    return 0;
}
