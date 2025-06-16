#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for( i=1; i<=2; i++)
    {
        cout<<"i = "<< i <<endl;
        for( j=1; j<=2; j++)
        {
            cout<<"  j = "<< j <<endl;
            for( k=1; k<=2; k++)
            {
                cout<<"    k = "<< k <<endl;
            }
        }
    }
    cout<<k <<endl;
}
