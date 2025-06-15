#include<iostream>
using namespace std;

void N(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(i>1) cout<<" ";
        cout<<i;
    }
    cout<<"\n";

}
int main()
{
    long long int n;
    cin>>n;
    N(n);
    return 0;
}
