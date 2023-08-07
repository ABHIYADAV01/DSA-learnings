#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lowerBound(int arr[],int n,int target)
{
    int start=0;
    int end=n-1;

    while(start<=end)
    {
       int mid = (start+end)/2;

        if(arr[mid]<=target && arr[mid+1]>target)
        {
             return arr[mid];
        }
        else if(arr[mid]>target)
        {
            end = mid-1;
        }
        else{
            start=mid+1;
        }
    }
    if(start>end)
    {
        return -999;
    }

}


int main()
{
    int arr[]={10,20,30,40,50};
    int n=5;

    cout<<lowerBound(arr,n,20);

}