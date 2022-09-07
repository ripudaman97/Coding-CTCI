#include<iostream>
#include<string>

using namespace std;

int main(){

	string s, p=" ";
	getline(cin,s);
	
	int count =0;
	for(int i=0;i<s.length();i++){

		if(int(s[i]) == p[0]){
			count++;
		}
	}

	char Snew[s.length() + (count*2)];
	int j=0;
	for(int i=0;i<s.length();i++){

		if(s[i] == p[0]){
			
			Snew[j]='%';
			j++;
			Snew[j]='2';
			j++;
			Snew[j]='0';
			j++;
		}else{
			Snew[j]=s[i];
			j++;
		}

	}

	
	cout<<Snew;
}