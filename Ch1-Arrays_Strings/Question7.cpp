#include<iostream>

using namespace std;

int main(){
	int N=0;
	cin>> N;
	int Arr[N][N];

	for(int i=0;i<N;i++){

		for(int j=0;j<N;j++){
			cin>>Arr[i][j];
		}
	}
	int temp=0;
	for(int j=0;j<N/2;j++){
		for(int i=0;i<N;i++){
			temp = Arr[i][j];
			Arr[i][j] = Arr[i][(N-1)-j];
			Arr[i][(N-1)-j] = temp;				
		}
	}

	for(int i=0;i<N;i++){
		for(int j=0;j<(N-1)-i;j++){
			if(i==(N-j)){
				continue;
			}
			temp = Arr[i][j];
			Arr[i][j]=Arr[(N-1)-j][(N-1)-i];
			Arr[(N-1)-j][(N-1)-i] = temp;
			
		}
	}

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<Arr[i][j];
		}
		cout<<endl;
	}



}