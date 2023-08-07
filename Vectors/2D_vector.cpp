#include<iostream>
#include<vector>
using namespace std;

int main(){

    //In 2D vector the number of elements in a particular row can differ

    vector<vector<int>> arr ={ 
        {1,2,3,5},
        {4,5,7},
        {8,9,10}
    };

    for(int i=0;i<arr.size();i++){

        //this is a forEach loop
        for(int x:arr[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }


}