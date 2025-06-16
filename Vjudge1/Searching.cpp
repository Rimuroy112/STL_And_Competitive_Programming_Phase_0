#include<iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int x; cin>>x;
    int first_position = -1;
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
          first_position = i;
          break;
        }
    }
    cout<<first_position<<endl;

}
