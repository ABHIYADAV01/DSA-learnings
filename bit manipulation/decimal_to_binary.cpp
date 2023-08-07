#include<iostream>
using namespace std;

int decimal_to_binary(int n){
   int ans=0;
    int power=1;

    while(n>0){
        int last_bit = (n&1);
        ans = ans+(last_bit*power);
        power = power*10;
        n = n>>1;
    }

    return ans;
}

int main(){
    int num;
    cin>>num;
    cout<<decimal_to_binary(num)<<endl;
    return 0;
}