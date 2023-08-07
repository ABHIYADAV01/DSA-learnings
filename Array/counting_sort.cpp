#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void counting_sort(int arr[],int n)
 {
    int largest = -1; //counting sort is only applcable on positive numbers


    for(int i=0;i<n;i++)
    {
        largest = max(largest,arr[i]);
    }

    vector<int>freq(largest+1,0);

   //creating the frequency array
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }

    //pushing back the elements of freq array to the original array
    int j=0;
    for(int i=0;i<=largest;i++)
    {
        while(freq[i]>0)
        {
            arr[j]=i;
            freq[i]--;
            j++;
        }

    }
}


int main()
{
    int arr[]={40,20,20,30,10};
    int n=5;

    counting_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }

}
