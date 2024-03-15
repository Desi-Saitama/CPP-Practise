#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	//constructor
	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};

void InsertAtHead(Node* &head, int d){
	Node* temp = new Node(d);
	temp->next = head;
	head = temp;
}

void printLL(Node* &head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp = temp->next;
	}
}

int main(){
	Node* Node1 = new Node(45);
	Node* head = Node1;
	printLL(head);
	InsertAtHead(head, 12);
	printLL(head);
	return 0;
}