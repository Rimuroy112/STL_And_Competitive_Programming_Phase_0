#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<=10)
        {
            cout<<"A["<< i <<"]"<<" = "<<a[i]<<endl;
        }
    }
    return 0;
}
