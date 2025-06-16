#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int original_number = number;
    int reverse_number = 0;
    while(number>0)
    {
        int last_digit = number % 10;
        reverse_number = reverse_number*10 + last_digit;

        int number_without_last_digit = number / 10;
        number = number_without_last_digit;
    }
    cout<<reverse_number<<endl;

    if(original_number==reverse_number)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
