#include<iostream>
using namespace std;

struct triangle
{
    int base,height;
    double area()
    {
        return base*height / 2;
    }
};

int main()
{
    triangle a;
    a.base = 20;
    a.height = 50;
    cout<<a.area()<<endl;
    triangle b = {10,20};
    cout<<b.area()<<endl;
}
