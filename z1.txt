#include <iostream>
using namespace std;

typedef int T;

struct Node {
	T info;
	Node * pointer;

	Node(T i, Node *n) {
		this->info = i;
		this->pointer = n;
	}
};

int main() {
	auto * lastNode = new Node(14, NULL);
	auto * firstNode = new Node(12, lastNode);
	/* one more way: 
	auto * head = new Node(12, new Node(14, new Node(15, NULL))); */
	cout << firstNode->pointer->info << endl;
	return 0;
}