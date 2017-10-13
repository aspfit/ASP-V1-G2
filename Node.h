#pragma once
template <class T>

struct Node {
public:
	T info;
	Node * pointer;

	Node<T>(T i, Node *n);
};

template<class T>
Node<T>::Node(T i, Node * n){
	this->info = i;
	this->pointer = n;
}
