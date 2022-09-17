#include<iostream>
#include<string>

using namespace std;

int main(){

	string s1,s2;
	cin>>s1;
	cin>>s2;

	string s3;
	s3.push_back(s1);
	s3.push_back(s1);
	
	//isSubstring is a defined function according to question
	bool ans = isSubString(s3,s2);

	cout<<ans;

}