//using new and delete keyword in dynamic memory allocation

#include<iostream>
using namespace std;

int  main(){

    int n;
    cin>>n;

   // Dynamic allocation
    int *arr = new int [n];

    cout<<arr<<endl;

    for(int i=0;i<n;i++){
        arr[i]=i;

        cout<<arr[i]<<" ";

    }
    cout<<endl;

   //deallocate the dynamically allocated space 
    delete [] arr;

    cout<<arr<<endl;
   
}