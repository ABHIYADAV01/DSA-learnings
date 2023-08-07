//using the find function in STL vector
#include<iostream>
#include<vector>
#include<algorithm> //u must include algorithm header file to use this function
using namespace std;

int main(){

    vector<int> arr = {1,2,4,5,6,15,34,67};

    vector<int>:: iterator it;  //declaring an iterator 

    int key;
    cout<<"Enter the element to be found"<<endl;
    cin>>key;
    
    //initialising an iterator
    it = find(arr.begin(),arr.end(),key);
    //Remember find() returns the address of the element and not the position so to find the position u can do
    // address - base address i.e it-arr.begin();
    if(it!=arr.end()){
        cout<<"Element found at position: "<<it-arr.begin()<<endl;    
    }
    else{
        cout<<"Element not found"<<endl;     
    }

    return 0;
}