#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void Selection_sort(int arr[],int n)
 {  

    //main idea here is to find the minimum element in unsorted part and add it to the sorted part
      for (int i = 0; i < n-1; i++)
      {
       int current = arr[i];
      int min_position;
       for(int j=i+1;j<n;j++)
       {
        if(current>arr[j]){
        min_position= j;
        }
       }

       swap(arr[i],arr[min_position]);


      }
      

}


int main()
{
    int arr[]={-1,-5,3,10,-6};
    int n=5;

    Selection_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

}