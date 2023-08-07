// What will be the output of the following program?
#include<iostream> 
using namespace std;
int main(){
    long long x = (1LL << 32) ;
    cout << x ;
    return 0;
}

// Answer - 2^32. The LL makes the integer literal of type long long. Therefore, this shift is not possible with simply ( 1 << 32) because the width of 1(int) is small.