#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int max_num = -100;
    for(int j=0; j<n; j++)
    {
      if(a[j] > max_num)
      {
          max_num = a[j];
      }
    }
    cout<<max_num;
}
