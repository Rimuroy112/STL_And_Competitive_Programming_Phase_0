#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int first_number_in_row = 1;
    for(int i=1; i<=n; i++)
    {
      for(int i=first_number_in_row; i<= first_number_in_row+2; i++)
      {
          cout<<i<<' ';
      }
      cout<<"PUM"<<endl;
      first_number_in_row += 4;
    }

    return 0;
}
