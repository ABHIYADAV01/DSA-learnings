//Understanding backtracking 
#include<iostream>
using namespace std;

void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

void Create_Array(int *arr,int i,int n,int val){
    
    //base case
    if(i==n){
        printArray(arr,n);
        return;
    }
    arr[i]=val;
    //recursive step
    Create_Array(arr,i+1,n,val+1);
    //backtracking step
    arr[i] = -1*arr[i];  //----> this step makes all the elements -ve while bactracking and hence -ve values are not printed in first printArray call
}

int main(){

    int arr[100] = {0};

    int n = 5;

    Create_Array(arr,0,n,1);
    cout<<"\n";
    printArray(arr,n);

}