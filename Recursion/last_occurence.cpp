//Program to find the last occurence of a number in a given array using recursion
#include<iostream>
using namespace std;

int last_occ(int arr[],int n,int key){

    //base case
    if(n==0){
        return -1;
    }

    int base_index = last_occ(arr+1,n-1,key);
    if(base_index ==-1){
        if(arr[0]==key){
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
            return base_index+1; 
    }
 

}


int main(){
    int arr[]={1,2,4,5,6,3,2,3};
    int n = sizeof(arr)/sizeof(int);
    int key = 4;
     cout<<last_occ(arr,n,key);
  
    return 0;
}