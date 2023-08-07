#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
   char str[]="MOM";
   int len =strlen(str)-1;
   
   for(int i=0;i<=len/2;i++)
   {
       if(str[i]==str[len]){
           len--;
           continue;
       }
       else
       {
           cout<<"Not a Palindrome\n";
           return 0;
       }
   }
   
   cout<<"Palindrome";
   
}