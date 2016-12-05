#include <iostream>
using namespace std;

/*
*  Node Struct Prototype
*/

struct Node {
	// Data members
	double value;
	struct Node* next;
};

class LinkedList {
	// data members
private:
	Node* head;
	// methods
public:
	int getSize();
	void insertAt(double value, int pos);
	void deleteAt(int pos);
	void print();
	double findAt(int pos);
	int search(double value);
	void updateAt(double newValue, int pos);
	double operator[](int index);

	// Constructor
	LinkedList(int size) {
		head = NULL;
		for (int i = 1; i < size; i++) {
			insertAt(-1, 0);
		}
	}
};