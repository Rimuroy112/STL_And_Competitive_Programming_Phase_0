#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n+1];
    int sum_of_digits=0;
    for(int i=1; i<=n; i++)
    {
        char digit_char; cin>>digit_char;
        //convert it to int
        int digit_int = digit_char - '0';
        sum_of_digits += digit_int;
    }

    cout<<sum_of_digits<<endl;
}
