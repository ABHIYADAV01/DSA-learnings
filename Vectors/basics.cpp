#include<iostream>
#include<vector>
using namespace std;

int main(){
     //demo vector
    // vector<int> arr ={1,2,3,4,5,15};

    //fill constructor : this is used to intialise all the elements of a vector with a particular value
    vector<int> arr(10,6); //in this case 10 elements are intialised with the value 6


    //adds a value to the end of the vector
    arr.push_back(134);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

     cout<<endl;

    //removes a value from the end of the vector
    arr.pop_back();

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

     cout<<endl;

    //Gives the number of elements in the vector
    cout<<arr.size()<<endl;

    //Capacity gives the current size of the vector as you know always a vector grows double the original size
    cout<<arr.capacity();
}