#include<iostream>

using namespace std;

bool checkUnique(string s){

	if(s.length()>128){
		
		return false;
	}
	int ArrU[128];

	for(int i=0;i<128;i++){
		ArrU[i]=0;
	}

	for(int i=0;i<s.length();i++){

		if(ArrU[int(s[i])] == 0){
			ArrU[int(s[i])] = 1;
		}else{
			return false;
		}	
	}
	return true;	
}

int main(){

	string s = "";
	cin>>s;

	if(checkUnique(s)){
		cout<<"String is Unique";
		}else{
			cout<<"Not Unique";
		}

}