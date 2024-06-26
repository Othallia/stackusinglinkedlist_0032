#include <iostream>

using namespace std;

//node class representing a single node in the linked list
class node {
public:
	int data;
	node * next;

	node() {
		next = NULL;
	}
};

//stack class
class stack {
private:
	node* top; //pointer to the top node of the stack

public:
	stack() {
		top = NULL; // initialize the stack with a null top pointer
	}
	
	//push operation: insert an element onto the top of the stack
	int push(int value) {
		node* newNode = new node();// 1. allocate memory for the new code
		newNode->data = value; //2. assging value
		newNode->next = top; //3. set the next pointer of the new node to the current top node
		top = newNode; //4. update the top pointer to the new node
		cout << "push value: " << value << endl;
		return value;
	}

	//pop operation: remove the topmost element from the stack
	void pop() {

 }
	 //peek/top opertaion: retieve the value of the topmost element without removing it
	void peek() {
		if (top == NULL) {
			cout << "List is Empty" << endl;
		}
		else {
			node* current = top;
			while (current != NULL) {
				cout << current->data << " " << endl;
				current = current->next;
			}
			cout << endl;
		}// return the value of the top node
	}
};