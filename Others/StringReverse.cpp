#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    char t[100];
    int n = strlen(s);
    for(int i=0; i<=n; i++)
    {
        t[i] = s[i];
    }
    t[n] ='\0';
    strrev(t);
    bool all_equal = true;
    for(int i=0; i< n; i++)
    {
        if(s[i] != t[i])
        {
         all_equal = false;
         break;
        }
    }
    if(all_equal)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
