//This code is to basically understand the direction of how recursion works 
//By taking simple example to print numbers in increasing and decreasing order 

#include<iostream>
using namespace std;


void Inc(int n){
    if(n==0){
        return;
    }

    Inc(n-1);  //note that here first u call the function and then print so after executing the last recursive call the program starts printing hence we obtain numbers in increasing order
    cout<<n<<",";
}


// Here we first print the number and then we go for the recursive call thus we get numbers in decreasing order 
void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<",";
    dec(n-1);
}



int main(){
    int n =5;
    Inc(5);
    cout<<endl;
    dec(5);
    return 0;
}