#include <iostream>

class Node {
	public:
		int data;
		Node *next;
	
	Node(){
		data = 0;
		next = NULL;
	}

	Node (int data) {
		this->data = data;
		this->next = NULL;
	}
};

class Linkedlist {
	Node *head;
	public:
		Linkedlist() {
			head = NULL;
		}
		
		void insertAtHead(int data) {
			Node *newNode = new Node(data);
			
			if (head == NULL) {
				head = newNode;
				return;
			}

			newNode->next = this->head;
			this->head = newNode;
		}

		void print() {
			Node *temp = head;
			
			if(head == NULL) {
				std::cout << "List empty" << '\n';
				return;
			}

			while (temp != NULL) {
				std::cout << temp->data << " ";
				temp = temp->next;
			}
		}

};

int main() {

	
	Linkedlist list;


	list.insertAtHead(20);
	list.insertAtHead(21);
	list.insertAtHead(22);
	list.insertAtHead(23);

	std::cout << "Elements of the list are: ";
	list.print();
	std::cout << '\n';
	
	int x = 5;
	int y = 6;
	int sum = x+y;


	std::cout << x << '\n';
	std::cout << y << '\n';
	std::cout << sum << '\n';

	return 0;
}
