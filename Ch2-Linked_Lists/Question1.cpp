#include<iostream>

using namespace std;

struct node{

	int data=0;
	node* next=NULL;
};

int main(){

	int n=0,val=0;
	cin>>n;
	node* head;
	node* p;
	for(int i=0;i<n;i++){
		cin>>val;
		if(i==0){
			head= new node; 
		
			head->data=val;
			head->next=NULL;
			p=head;
		}else{
			p->next = new node;
			p=p->next;
			p->data = val;
			p->next=NULL;

		}

	}
	
	int Arr[100];
	for(int i=0;i<100;i++){
		Arr[i]=0;
	}

	node* q=NULL;
	p=head;
	q=head;
	Arr[q->data]=1;
	p=p->next;
	while(p!=NULL){
		
		int j=p->data;
		
		if(Arr[j] == 0){
			Arr[j]=1;
			q=p;
			p=p->next;
		
		}else{
			
			
			q->next = p->next;
			p=p->next;
			

		}

	}
	p=head;
	while(p!=NULL){

		cout<<p->data;
		p=p->next;
	}



}

