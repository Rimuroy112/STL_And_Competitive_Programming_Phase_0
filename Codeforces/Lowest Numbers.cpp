#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int mn = 1e9;

    for(int i=0; i<n; i++)
    {
        mn = min(mn, a[i]);
    }
    cout << mn << ' ';
    for(int i=0; i<n; i++)
    {
        if(a[i]==mn)
        {
            cout<< i+1 << endl;
            return 0;
        }

    }
}
