//Note:Whenever Subsets or Combination is asked in the question go for recursion and backtracking i.e pick and not pick approach
#include<iostream>
using namespace std;

void subsets_of_string(char *input,char *output,int i,int j){

    if(input[i]=='\0'){
        //add a null character to the output string and then print it
        output[j]='\0';
        cout<<output<<endl;
        return;
    }
    
    //pick 
    output[j]=input[i];
    subsets_of_string(input,output,i+1,j+1);

    //not pick
    //do not increment j
    output[j]='\0';
    subsets_of_string(input,output,i+1,j);

}


int main(){

    char input[1000];
    char output[1000];

    cin>>input;

    subsets_of_string(input,output,0,0);
    return 0;  
}