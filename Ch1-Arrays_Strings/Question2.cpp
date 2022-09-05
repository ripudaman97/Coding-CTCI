#include<iostream>
#include <string>
using namespace std;

string checkPerm(string s1, string s2){

	if(s1.length() != s2.length()){

		return "String are not permutations";
	}
	int arr1[128];
	int arr2[128];
	
	for(int i=0;i<128;i++){

		arr1[i] = 0;
		arr2[i] = 0;
	}
	for(int i=0;i<s1.length();i++){

		arr1[(int)s1[i]] += 1;
		arr2[(int)s2[i]] += 1;
	}

	for(int i=0;i<128;i++){
		
		if(arr1[i] != arr2[i]){

			return "String are not permutations";
		}
	}

	return "String are permutations";

}
int main(){

	string s1;
	string s2;
	getline(cin, s1);
	getline(cin, s2);

	string p = checkPerm(s1,s2);
	cout<<p;
}