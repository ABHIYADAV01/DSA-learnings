//Program to find the first occurence of a number in a given array using recursion
#include<iostream>
using namespace std;

int First_occ(int arr[],int n,int key){

    //base case
    if(n==0){
        return -1;
    }

    if(arr[0]==key){
        return 0;
    }

    int base_index = First_occ(arr+1,n-1,key);
    if(base_index!=-1){
        return base_index+1;
    }
  
    return -1;

}


int main(){
    int arr[]={1,2,4,5,6,3,3,2};
    int n = sizeof(arr)/sizeof(int);
    int key = 5;
    cout<<First_occ(arr,n,key);
    return 0;
}