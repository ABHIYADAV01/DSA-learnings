#include<iostream>
using namespace std;

/* Replace Bits in N by M
You are given two 32-bit numbers, N and M, and two bit positions i and j.
Write a method to set all bits between i and j in N equal to M.
M (becomes a substring of N locationed at and starting at j)

Example:
N = 10000000000;
M = 10101;
i = 2, j = 6
Output : 1001010100 */

void clearBitsinRange(int &N,int i,int j){
    // refer video 82 tobe more clear

    int a = -1 << (j+1);

    int b = (i<<i)-1;

    int mask = a | b;

    N = N & mask;

}

void replaceBits(int &N,int i,int j,int M){
    clearBitsinRange(N,i,j);

    int mask = (M<<i);

    N = N | mask;

}

int main(){

	int n = 15;
	int i = 1;
	int j = 3;
	int m = 2;

	replaceBits(n,i,j,m);
	cout << n ;

	return 0;
}