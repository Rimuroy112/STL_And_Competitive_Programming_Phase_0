#include<iostream>
using namespace std;
int main()
{
    int row_count;
    cin>>row_count;
    for(int row=1; row<=row_count; row++)
    {
        int count_of_stars = row;
        for(int stars = 1; stars <= count_of_stars; stars++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
