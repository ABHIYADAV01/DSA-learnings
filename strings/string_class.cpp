#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main()
{

    string s;
    getline(cin,s,'.');  //takes full stop as end of string

    // getline(cin,s);   take new line character as end of string.


    cout<<s<<endl;

    int str = 243;

   string strp;


    strp = to_string(str);

   cout<<strp<<endl;


}