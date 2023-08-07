#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

//using comparator method to sort in descending order

// bool compare(int a,int b)
// {
//     return a>b;
// }


int main()
{
    int arr[]={-1,-5,3,10,-6};
    int n=5;

    // sort(arr,arr+n,compare);

    // //first sorting and then reversing to get a descendingly sorted array
    // sort(arr,arr+n);
    // reverse(arr,arr+n);

    //using the inbuilt comparator for sort in descending order
     sort(arr,arr+n,greater<int>());

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

}