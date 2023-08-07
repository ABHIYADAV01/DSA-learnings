#include<iostream>
using namespace std;

//this is the most imp function to remember 
// if you look at the code carefully it is nothing but the code of nCk i.e is combination
int binomial_coefficient(int n, int k){

	int res = 1;

   // VIP step to limit the value of k
	if(k>n-k){
		k = n-k;
	}

	for(int i=0;i<k;i++){
		res *= (n-i);
		res /= (i+1); 
	}

	return res;
}

void pascals_triangle(int n){

 
   for(int line=0;line<n;line++){
      
	  //we know that in pascal's triangle the number of terms in a line are equal to the line number

	  for(int i=0;i<=line;i++){
		cout<<" "<<binomial_coefficient(line,i);
	  }

	  cout<<endl;

   }

}

int main(){
	int n=6;
	pascals_triangle(n);

	return 0;
}