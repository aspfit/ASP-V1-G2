#include <iostream>
#include "linkedList.h"

using namespace std;

int main() {
	LinkedList<int> list;
	list.addFirst(3);
	cout << list.head->info << endl;
	return 0;
}