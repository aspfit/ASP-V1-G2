#pragma once
#include "Node.h"

template <class T>
struct LinkedList {
public:
	Node <T> * head = nullptr;
	void addFirst(T info);
	void addLast(T info);
	void displayList();
};


template<class T>
void LinkedList<T>::addFirst(T info){
	head = new Node<T>(info, head);
}

template<class T>
void LinkedList<T>::addLast(T info) {
	if (head == nullptr) {
		this->addFirst(info);
		return;
	}
	Node<T> * currNode = head;
	while (currNode->pointer != nullptr)
		currNode = currNode->pointer;
	currNode->pointer = new Node<T>(info, nullptr);
}

template<class T>
void LinkedList<T>::displayList() {
	Node<T> * currNode = head;
	while (currNode != nullptr){
		cout << currNode->info << " ";
		currNode = currNode->pointer;
	}
	cout << endl;
}

