#include<iostream>
using namespace std;


void getIthbit(int &num,int i){
    int mask = (1<<i);
    num = (num & mask);
}


void setIthbit(int &num,int i){
    int mask = (1<<i);
    num = (num | mask);
}

void clearIthbit(int &num,int i){
    int mask = ~(1<<i);
    num = (num & mask);
}

void updateIthbit(int &num,int i,int value){
    //this function updates the ith bit to the value specified by 'value'
    clearIthbit(num,i);
    int mask = (value<<i);

    num = num | mask;

}

void clearLastIbits(int &num,int i){
    int mask = (-1<<i);   // -1 = 111111111111111111111 => 32 times in a 32 bit machine or ucan also do (~(0)<<i)
    num = num & mask;
}

void clearBitsinRange(int &num,int i,int j){
    // refer video 82 tobe more clear

    int a = -1 << (j+1);

    int b = (i<<i)-1;

    int mask = a | b;

    num = num & mask;

}


int main(){
      int num = 31;
      int i;
    //   cout<<"Enter value of i:";
    // //   cin>> i;

    //   getIthbit(num,i);
    //  setIthbit(num,i);
    // clearIthbit(num,i);
    //    updateIthbit(num,i,1);
        // clearLastIbits(num,i);
     clearBitsinRange(num,1,3);

      cout<<num;

      return 0;
}
