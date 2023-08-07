#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main(){

	char sentence[1000];

	// char temp = cin.get();

	// int len = 0;

	// //could have checked our len doesn't exceed the sentence array, additional check 
    // //note that \n should be in single quotes and not in double quotes else error
	// while(temp!='\n'){
	// 	sentence[len++] = temp;
	// 	temp = cin.get();
	// }
	// sentence[len] = '\0';

	// cout<<"Length "<<len <<endl;

	cin.getline(sentence,1000);
     //note you can pass also pass a 3rd argument in getline() i.e it by which character the string input should end by default it is set yo \n
	cout << sentence <<endl;
	cout<<"Length:"<<strlen(sentence);
}