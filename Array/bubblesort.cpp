#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void Bubble_sort(int arr[],int n)
 {
    //NOTE: loop i goes from 0 to i<n-1 and not i<=n-1=>if this is done garbage values are printed
    //same case for the j also
    for(int i=0;i<n-1;i++)
    {
        for( int j=0;j<n-i-1;j++)
        {
            //repeated swapping with the adjacent elements
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


int main()
{
    int arr[]={-1,-5,3,10,-6};
    int n=5;

    Bubble_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

}