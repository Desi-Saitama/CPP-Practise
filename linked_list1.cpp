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

	//destructor
	~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "Memory Freed " << value << endl;
    }
};

// Insertion Condtions//
void InsertAtHead(Node* &head, int d){
	Node* temp = new Node(d);
	temp->next = head;
	head = temp;
}

void InsertAtTail(Node* &tail, int d){
	Node* temp = new Node(d);
	tail->next = temp;
	temp->next = NULL;
	tail = tail->next;
}

void InsertatPos(Node* &head, Node* &tail, int position, int d){
	if (position==1){
		InsertAtHead(head, d);
		return;
	}

	Node* temp = head;
	int count =1;
	while(count<position-1){
		temp=temp->next;
		count++;
	}

	if(temp->next == NULL){
		InsertAtTail(tail, d);
		return;
	}

	Node* nodetoinsert = new Node(d);
	nodetoinsert->next = temp->next;
	temp->next = nodetoinsert;
}

// Basic Travesral//
void printLL(Node* &head){
	if(head==NULL){
		cout<<"List is Empty"<<endl;
		return;
	}
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}


// All deletion Conditions //
void deleteNodeATpos(int position, Node* &head){
	if(position==1){
		Node* temp = head;
		head = head->next;
		temp->next = NULL;
		delete temp;
	}

	else{
		Node* current = head;
		Node* prev = NULL;

		int count = 1;
		while(count<position){
			prev = current;
			current = current->next;
			count++;
		}

		prev->next = current->next;
		current->next = NULL;
		delete current;
	}
}


int main(){
	Node* Node1 = new Node(45);
	Node* head = Node1;
	Node* tail = Node1;
	InsertAtTail(tail, 120);
	InsertAtHead(head, 123);
	//printLL(head);
	InsertatPos(head, tail, 4, 3);
	printLL(head);
	cout<<endl;
	deleteNodeATpos(3, head);
	printLL(head);
	return 0;
}