//few more uses of vectors
#include<iostream>
#include<vector>
using namespace std;

//Note that in display vector is passed as a reference variable

void display(vector<int> &v){

    for(int i=0;i<v.size();i++){

        cout<<v.at(i)<<" ";  // at() is als0 a vector function which gives the element present at the position i
    }
    cout<<endl;

}

int main(){

    vector<int> arr = {1,2,3,4};

    //using a iterator
    vector<int> :: iterator it = arr.begin();

    arr.insert(it+1,7,155);   //here the mid value 7 means 155 will be inserted 7 times 
    display(arr);

    return 0;

}