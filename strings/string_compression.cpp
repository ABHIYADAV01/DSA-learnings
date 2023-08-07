#include<iostream>
#include<string>
using namespace std;

string str_compress(string str){
      int n = str.length();  // to find the length of the string u can use str.length()
      string output;
      for(int i=0;i<n;i++)
      {
            int count=1;

            while (i<n-1 && str[i]==str[i+1])
            {
                count++;
                i++;
            }
            output += str[i]; //in c++ you can concatenate 2 strings using '+' 
            output += to_string(count);  //to_string is used to convert integer into string
            
      }

      //now our objective is to compress the string to minimum possible so for example if the given string is "abcd" then it is already a compressed string and if u try to compress this u would get a1b1c1d1 which would take more space, so write a if statement for the same.

      if(output.length()>str.length()){
            return str;
      }

      return output;

}

int main()
{
      string s1="aaabbcccdd";

      cout<<str_compress(s1)<<endl;;

      string s2="abcd";
      cout<<str_compress(s2);

      return 0;
}