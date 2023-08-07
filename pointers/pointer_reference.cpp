//pass by reference using pointers

#include<iostream>
using namespace std;

void views(int *viewptr){
    *viewptr = *viewptr+1;
}

int main(){
    int view = 100;

    views(&view);

    cout<<view<<endl;

    return 0;

}