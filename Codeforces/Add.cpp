#include<iostream>
using namespace std;

int get_sum(int x,int y)
{
    return x+y;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<get_sum(x,y)<<endl;

    return 0;
}
