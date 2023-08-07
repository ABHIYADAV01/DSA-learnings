#include<iostream>
#include<string>
using namespace std;

int main(){

    string str ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int q=0,r=0,num;

    string st;

    cout<<"Enter num"<<endl;
    cin>>num;

    if(num>=1 && num<=26){
        st+=str[num];
    }
    else{ 
        q = num/26;
        st+=str[q];
        r=num%26;
        st+=str[r];
    }

    cout<<st;
    return 0;
}