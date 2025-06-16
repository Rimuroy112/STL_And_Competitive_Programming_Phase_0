#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
            swap(x,y);
        }
        int sum_of_odd = 0;
        for(int i = x+1; i<y; i++)
        {
            if(i%2==1)
            {
                sum_of_odd += i;
            }
        }
        cout<<sum_of_odd<<endl;
    }
    return 0;
}
