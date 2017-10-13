#pragma once
#include "Node.h"

template <class T>
struct LinkedList {
public:
	Node <T> * head;
	void addFirst(T info);
};


template<class T>
void LinkedList<T>::addFirst(T info){
	head = new Node<T>(info, head);
}
