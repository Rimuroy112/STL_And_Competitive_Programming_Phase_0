#include<iostream>
using namespace std;
int main()
{
    int n = 6;
    int a[n]={1,2,3,5,1,1};
    for(int value = 1; value<=10; value++)
    {
     int cnt = 0;
    for(int i=0; i<=n; i++)
    {
      if(a[i]==value)
      {
         cnt++;
      }
    }
    cout<<value<<" occurs  "<<cnt<<"times"<<endl;
    }
    return 0;
}
