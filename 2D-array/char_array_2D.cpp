#include<iostream>
using namespace std;

int main()
{
    char str[][10]={
        "one",
        "two",
        "three",
        "four",
        "five"
    };

   //This will print all the strings in the array
    for(int i=0;i<5;i++)
    {
        cout<<str[i]<<endl;
    }


     int i=2;
    cout<<str[i][3];

    return 0;
}