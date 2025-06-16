#include<iostream>
using namespace std;
int main()
{
   int n;
   cin >> n;
   for(int i=1; i<=n; i++)
   {
        int sum = 0;
     for(int j=1; j<=i; j++)
     {

        if(j > 1)
        {
             cout<<"+";
        }
       cout << j;
       sum+=j;
     }
      cout << '=';
      cout<< sum << '\n';
   }

}

