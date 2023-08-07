#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void Insertion_sort(int arr[],int n)
 {

    for(int i=1;i<=n-1;i++)
    {
       int current = arr[i];
       int prev=i-1;
       while(prev>=0 && arr[prev]>current)
       {
        arr[prev+1]=arr[prev];
        prev=prev-1;
       }
       arr[prev+1]=current;
    }
   
}


int main()
{
    int arr[]={-1,-5,3,10,-6};
    int n=5;

    Insertion_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

}