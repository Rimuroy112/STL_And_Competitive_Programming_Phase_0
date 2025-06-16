#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int line=1; line<=n; line++)
    {
        int spaces = n - line;
    int stars = 2*line - 1;
        for(int i=1; i<=spaces; i++)
        {
            cout<<" ";
        }
        for(int j=1; j<=stars; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int line=n-1; line>=1; line--)
    {
        int spaces = n - line;
        int stars = 2*line - 1;
        for(int i=1; i<=spaces; i++)
        {
            cout<<" ";
        }
        for(int j=1; j<=stars; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
