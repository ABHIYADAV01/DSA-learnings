#include<iostream>
#include <bits/stdc++.h>
using namespace std;


//Kadane's algorithm that also works if all the elments are negative
/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currentSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];
            
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
            
            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        
        return maxSum;
    }
};
*/

int Max_Subarray_Sum(int arr[],int n)
{
    int current_sum=0;
    int largest_sum=0;  //just make this largest_sum = INT_MIN to work even if all elements are negative

    for(int i=0;i<n;i++)
    {
       
        current_sum += arr[i];
         if(current_sum<0)
         {
            current_sum=0;
         }

        largest_sum=max(largest_sum,current_sum);

    }
    return largest_sum;
    }

int main()
{
    int arr[]={10,20,-5,30,-10};

    int n= sizeof(arr)/sizeof(int);

    cout<<Max_Subarray_Sum(arr,n)<<endl;
    return 0;
}