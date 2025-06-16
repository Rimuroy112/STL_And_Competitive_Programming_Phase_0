#include<iostream>
using namespace std;
int main()
{
    int a,b,c; cin>>a>>b>>c;
    int minimum = min(a, min(b,c));
    int maximum = max(a, max(b,c));
    int mid = a+b+c-(minimum+maximum);
    cout<<minimum<<endl<<mid<<endl<<maximum<<endl;
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;

    return 0;
}
