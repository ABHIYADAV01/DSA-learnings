//fast exponentiation
//finding the exponent in O(log n) time complexity
#include<iostream>
using namespace std;

int fast_exponetiation(int a,int n){

    int ans =1 ;

    while (n>0)
    {
       int last_bit = n&1;
       if(last_bit){
        ans = ans*a;
       }
       a = a*a;
       n = n>>1;
    }
    return ans;

}


int main(){
       
       int a,n;
       cout<<"Enter the number"<<endl;
       cin>>a;
       cout<<"Enter the power"<<endl;
       cin>>n;

       cout<<fast_exponetiation(a,n)<<endl;
       return 0;
}