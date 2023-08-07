//Program to check whether a given number is the power of 2 or not in linear time 
#include<iostream>
using namespace std;

void power_of_Two(int n){

    if( (n & (n-1)) == 0){
        cout<<"Power of 2"<<endl;
    }
    else{
        cout<<"Not a power of 2";
    }
}

int main(){
    int n;
    cin>>n;
    power_of_Two(n);
    return 0;
}

