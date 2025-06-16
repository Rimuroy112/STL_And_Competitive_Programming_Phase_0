#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    // swap a with b
    int temp = a;
    a = b;
    b = temp;

    // swap b with c
     temp = b;
    b = c;
    c = temp;

    cout << a << b << c << endl;

}
