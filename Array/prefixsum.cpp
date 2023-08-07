#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int prefixSum(int arr[],int n)
{
    int prefix[n];
    prefix[0]=arr[0];

    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
   
   int largestSum=0;

    for(int i=0;i<n;i++)
    {

        int subarraySum=0;
        for(int j=i;j<n;j++)
        {
        subarraySum= i>0?prefix[j]-prefix[i-1]:prefix[j];
        largestSum=max(largestSum,subarraySum);
        }
        
    }
    return largestSum;
}

int main()
{
    int arr[]={10,20,-10,30,-5};

    int n= sizeof(arr)/sizeof(int);

    cout<<prefixSum(arr,n)<<endl;
    return 0;
}
