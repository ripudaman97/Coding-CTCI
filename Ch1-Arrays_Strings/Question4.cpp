#include<iostream>
#include<string>

using namespace std;



int main(){

	string s;
	getline(cin,s);
	
	int Arr[128];

	for(int i=0;i<128;i++){
		Arr[i]=0;
	}
	int count=0;

	for(int i=0;i<s.length();i++){
		
		Arr[(int) s[i]]= Arr[(int) s[i]] +1;		
	}

	for(int i=0;i<128;i++){
		
		if(Arr[i]%2 == 1){
			count++;
			cout<<count;
			if(count>1){
				break;
			}
		}
	}

	if(count>1){
		cout<<"Not a permutation of a palindrome";
	}else{
		cout<<"Permutation of a palindrome";
	}


}