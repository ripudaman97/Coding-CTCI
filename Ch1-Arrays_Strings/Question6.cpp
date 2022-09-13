#include<iostream>
#include<string>

using namespace std;

int main(){

	string s;
	string s1="";
	getline(cin,s);
	int count= (int) s[0];
	s1.push_back(s[0]);
	int currcount=1;
	for(int i=1;i<s.length();i++){
		
		if(count == (int) s[i]){
			currcount++;
			if(i == s.length()-1){

			string p=to_string(currcount);
			for(int j=0;j<p.length();j++){
				s1.push_back(p[j]);
			}
			}
		}else{
			//add cuurcount to string
			string p=to_string(currcount);
			for(int j=0;j<p.length();j++){
				s1.push_back(p[j]);
			}
			currcount=1;
			count = (int) s[i];
			s1.push_back(s[i]);
			
			if(i == s.length()-1){

			string p=to_string(currcount);
			for(int j=0;j<p.length();j++){
				s1.push_back(p[j]);
			}
			}
		}
	}


	if(s1.length()<s.length()){
		cout<<s1;
	}else{
		cout<<s;
	}


}