//Program to check whether the given array is sorted or not using recursion

#include<iostream>
using namespace std;


//Method-1
bool is_Sorted(int arr[],int n){
    //base case
    if(n==1 || n==0){
       return true;
    }
   
   //Recursive case
    if(arr[0]<arr[1] && is_Sorted(arr+1,n-1)){
        return true;
    }

    return false;
}

//Method-2
bool is_Sorted_Two(int arr[],int i,int n){

    if(i==n-1){
        return true;
    }

    if(arr[i]<arr[i+1] && is_Sorted_Two(arr,i+1,n)){
        return true;
    }

    return false;
}

int main(){
    int arr[] ={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    cout<<is_Sorted(arr,n)<<endl;
    cout<<is_Sorted_Two(arr,0,n);

    return 0;

}