#include<iostream>
using namespace std;
#define MAX_SIZE 100

struct Node{
	int data;
	Node* next;
};

class Linked_list{
private:
Node* Head;
public:
	int A[MAX_SIZE];
	Linked_list(){
	Head = NULL;
}

/* Node* createNode(){
	Node* temp_root = new Node();
	return temp_root;
}*/

void insertNode(int x){
	Node* temp = new Node();
	temp->data=x;
	temp->next=Head;
	Head=temp;
}

void print(){
	Node* temp2;
	temp2=Head;
	cout<<"Linked List is :- ";
	while(temp2 != NULL){
		cout<<temp2->data<<" -> ";
		temp2=temp2->next;
	}
	cout<<"\n";
}
void reverse(){
	Node* current=Head;
	Node *prev=NULL;
	Node *next=NULL;
	while(current != NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	Head=prev;
}
};
int main(){
	Linked_list a;
	int n;
	cout<<"Enter integer to make linked_list of thet length"<<"\n";
	cin>>n;

	for(int i=0;i<n;i++){
		a.A[i]=i;
		a.insertNode(a.A[i]);
		}
	a.print();
	
	// reversing a linked list
	a.reverse();
	a.print();

	return 0;
}

