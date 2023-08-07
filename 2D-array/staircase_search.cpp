
// see lecture number 54 to understand and the code is written in lecture 52
//program to find a element and return its position in a 2D sorted array
#include<iostream>
using namespace std;

//Note: Pair is a STL of C++ which contains elements of any kind of datatype and pair can be different also meaning pair<int,char> is also correct here we use it to return a pair of position 

//To print the elements of a pair you need to use pair_name.first and pair_name.second

pair<int,int> staircase_search(int arr[][4],int n,int m,int key){

    //if the element is not present then return {-1,-1}
    if(key<arr[0][0] || key>arr[n-1][m-1]){
        return {-1,-1};
    }

    //code for staircase search

    //as it is a sorted array you should always look for a logic that is similar to that of binary search 
    int i=0,j=m-1; 
    while(i<=n-1 && j>=0){

        if(arr[i][j]==key){
            return {i,j};
        }
        else if(arr[i][j]<key){
            i++;
        }
        else{
            j--;
        }

    }

    //if you reach here that means the element is not present in the array so return {-1,-1}
    return {-1,-1};


}




int main()
{
    
    int n,m;
    n=4;
    m=4;

   int arr[][4]={ {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}
                      };


  int key;
  cout<<"Enter the element to be found"<<endl;
  cin>>key;

 pair<int,int> result = staircase_search(arr,n,m,key);

 cout<<"Element is found at position"<<endl;
 cout<<"("<<result.first<<","<<result.second<<")";

return 0;
    
}