#include <iostream>
#include "linkedList.h"

using namespace std;

int main() {
	LinkedList<int> list;
	list.addFirst(3);
	list.addFirst(4);
	list.addFirst(5);
	list.addLast(1); 
	list.displayList();
	return 0;
}