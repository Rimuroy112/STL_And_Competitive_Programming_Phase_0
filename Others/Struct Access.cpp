#include<iostream>
using namespace std;

struct student{

int age;
char name[100];
int marks[8];
};

int main()
{
    student shohag;
    shohag.age = 26;
    cout<<shohag.age<<endl;
    char s[] = "Shohag";
    for(int i=0; i<6; i++)
    {
        shohag.name[i] = s[i];
    }
   // shohag.name[6] = '\0';
    cout<<shohag.name<<endl;
    shohag.marks[0] = 60;
    cout<<shohag.marks[0]<<endl;

    return 0;
}
