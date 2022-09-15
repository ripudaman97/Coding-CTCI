#include<iostream>

using namespace std;

int main(){

	int m=0,n=0;
	cin>>m;
	cin>>n;
	int Arr[m][n];
	int Arr1[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){

			cin>>Arr[i][j];
			Arr1[i][j]=Arr[i][j];
		}
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			
			if(Arr[i][j]==0){
				for(int k=0;k<m;k++){
					Arr1[k][j]=0;
				}

				for(int l=0;l<m;l++){
					Arr1[i][l]=0;
				}
			}
		}
		
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){

			cout<<Arr1[i][j];
		}
		cout<<endl;
	}

}