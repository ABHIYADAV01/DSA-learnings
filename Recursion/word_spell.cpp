#include<iostream>
using namespace std;

//make a global array of srtings

string spell[] ={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

void word_spell(int n){

    if(n==0){
        return;
    }

   int last_digit = n%10;

   word_spell(n/10);

    cout<<spell[last_digit]<<" ";

}


int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    word_spell(n);
    return 0;

}