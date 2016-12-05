#include <iostream>
#include "LinkedList.h"
using namespace std;


int LinkedList::getSize() {
	Node* temp;
	temp = head;
	int counter = 0;

	// Iterate through the LinkedList
	while (temp != NULL) {
		temp = temp->next;
		counter++;
	}
	return counter;
}

void LinkedList::insertAt(double value, int pos) {
	if (pos > getSize()) {
		cout << "Out of range" << endl;
	}
	else {
		if (pos == 0) {
			if (head == NULL) {
				head = new (struct Node);
				head->value = value;
				head->next = NULL;

			}
			else {
				Node* temp = new (struct Node);
				Node* ptr;
				ptr = head;
				head = temp;
				head->value = value;
				head->next = ptr;
			}
		}
		else if (pos > 0 && pos <= getSize()) {
			Node* prev, *curr;
			curr = head;
			for (int i = 0; i < pos; i++) {
				prev = curr;
				curr = curr->next;
			}
			Node* temp = new (struct Node);
			prev->next = temp;
			temp->next = curr;
			temp->value = value;
		}
	}
}

void LinkedList::deleteAt(int pos) {
	if (head == NULL) {
		cout << "The list is empty" << endl;
	}
	else {
		Node *prev, *curr;
		curr = head;
		if (pos == 0) {
			head = curr->next;
		}
		else {
			if (pos > 0 && pos < getSize()) {
				for (int i = 0; i < pos; i++) {
					prev = curr;
					curr = curr->next;
				}
				prev->next = curr->next;
			}
			else {
				cout << "Out of range" << endl;
			}
		}
	}
}

int LinkedList::search(double value) {
	Node* temp = head;
	int index = -1;
	int counter = 0;

	while (temp->next != NULL) {
		if (temp->value == value) {
			index = counter;
			return index;
		}
		else {
			counter++;
			temp = temp->next;
		}
	}
	return index;
}

double LinkedList::findAt(int pos) {
	Node *temp = head;
	if (pos >= getSize() || pos < 0) {
		cout << "Out of range" << endl;
		double ret = -1;
		return &ret;
	}
	for (int i = 0; i < pos; i++) {
		temp = temp->next;
	}
	return &(temp->value);
}

void LinkedList::updateAt(double newValue, int pos) {
	Node *temp = head;
	int posCounter = 0;

	while (temp->next != NULL) {
		if (posCounter == pos) {
			temp->value = newValue;
			return;
		}
		else {
			temp = temp->next;
			posCounter++;
		}
	}
	if (pos > posCounter) {
		cout << "Index " << pos << " is out of range" << endl;
	}
}

void LinkedList::print() {
	Node* temp = head;
	cout << "HEAD->" << head->value << "->";
	while (temp->next != NULL) {
		temp = temp->next;
		cout << temp->value << "->";
	}
	cout << "NULL" << endl;
}

double LinkedList::operator[](int index) {
	return findAt(index);
}