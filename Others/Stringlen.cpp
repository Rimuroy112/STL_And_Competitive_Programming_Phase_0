#include<iostream>
using namespace std;
int main()
{
    char c[100];
    cin>>c;
    int len=0;
    for(char i=0; c[i] != '\0'; i++)
    {
        len++;
    }
    cout<<len<<endl;
}
