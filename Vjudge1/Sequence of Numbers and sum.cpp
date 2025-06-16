#include<iostream>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(n<=0 or m <= 0)
        {
            break;
        }
        if(n>m)
        {
            swap(n,m);
        }
        int sum = 0;
        for(int i=n; i<=m; i++)
        {
            cout<< i <<' ';
            sum += i;
        }
        cout<<"sum ="<<sum<<endl;
    }
}
