#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int calculate_marks(vector<int> marks){
    return marks[0]+marks[1]+marks[2];
}


bool compare(pair<string,vector<int>> s1, pair<string,vector<int>> s2){

    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;
    return calculate_marks(m1)>calculate_marks(m2);
      
}

int main(){
		vector<pair<string,vector<int> > >  student_marks = {
			{"Rohan", {10,20,11}},
			{"Prateek",{10,21,3}},
			{"Vivek",{4,5,6}},
			{"Rijul",{10,13,20}}
	};

	sort(student_marks.begin(),student_marks.end(),compare);

     //this won't work
    // for(auto i=0;i<student_marks.size();i++){
    //     cout<< student_marks[i].first <<" "<<calculate_marks(student_marks[i].second)<<endl;
    // }

    for(auto s: student_marks){
        cout<< s.first <<" "<<calculate_marks(s.second)<<endl;
    }
	return 0;
}