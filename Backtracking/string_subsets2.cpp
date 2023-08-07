
//sorting the subsets in order
// sorting in the sense order should be : Null,a,b,c,ab,bc,ac,abc
#include<bits/stdc++.h>
using namespace std;

//custom comparator
 bool comparator(string a,string b){
    if(a.length()==b.length()){
        return a<b; //lexiographic order
    }

    return a.length()<b.length(); //according to length i.e the shorter lengths should come first

 }

void subsets_of_string(char *input,char *output,int i,int j,vector<string>& ans){

    if(input[i]=='\0'){
        //add a null character to the output string and then print it
        output[j]='\0';
        string temp = output;
        ans.push_back(temp);
        return;
    }
    
    //pick 
    output[j]=input[i];
    subsets_of_string(input,output,i+1,j+1,ans);

    //not pick
    //do not increment j
    output[j]='\0';
    subsets_of_string(input,output,i+1,j,ans);

}


int main(){

    char input[1000];
    char output[1000];

    cin>>input;

    vector<string> ans;

    subsets_of_string(input,output,0,0,ans);

    sort(ans.begin(),ans.end(),comparator);

    for(auto s:ans){
        cout<<s<<',';
    }
    return 0;  
}