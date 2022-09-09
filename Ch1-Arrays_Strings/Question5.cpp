#include<iostream>
#include<string>
#include<math.h>

using namespace std;


int main(){


	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);

	if(abs(s1.length()-s2.length()) > 1){
		cout<<"false";
		return 0;
	}

	int ar[s1.length()+1][s2.length()+1];
	
	for(int i=0;i<s1.length();i++){
		for(int j=0;j<s2.length();j++){
			ar[i][j]=0;
		}
	}

	

	for(int i=1;i<=s1.length();i++){

		for(int j=1;j<=s2.length();j++){
			
			if(s1[i-1]==s2[j-1]){
				ar[i][j]=ar[i-1][j-1];
			}else{
				ar[i][j]=ar[i-1][j-1] + 1;
			}
		}
	}
	
	if(ar[s1.length()][s2.length()] > 1){
		cout<<"false";
	}else{
		cout<<"true";
	}
}