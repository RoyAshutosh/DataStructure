// linkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.                                                        C

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

struct Node* first = NULL;
void create(int A[], int n) {
	int i;
	struct Node* t, * last;
	first = (struct Node*)malloc(sizeof(struct Node));
	first->data = A[0];
	first->next = NULL;
	last = first;

	for (i = 1; i < n; i++) {                               //i=1,because already 0 th element is created...
		t = (struct Node*)malloc(sizeof(struct Node));
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
}
//iterative...
void Display(struct Node* p) {
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
//recursive...
void RDisplay(struct Node* p) {
	if (p != NULL) {
		printf("%d ", p->data);
		RDisplay(p->next);
	}
}
//iterative count...
int  Count(struct Node* p) {
	int c = 0;
	while (p != NULL) {
		c++;
		p = p->next;
	}
	return c;
}
//recursive  count...
int RCount(struct Node* p) {
	if (p == NULL)
		return 0;
	else
		return RCount(p->next) + 1;
}
//iterative...
int Add(struct Node* p) {
	int sum = 0;
	while (p != NULL) {
		sum += p->data;
		p = p->next;
	}
	return sum;
}
//recursive...
int RAdd(struct Node* p) {
	if (p == NULL)
		return 0;
	return RAdd(p->next) + p->data;
}
//iterative...
int MaxNum(struct Node* p) {
	int max = INT_MIN;
	while (p) {
		if (p->data > max)
			max = p->data;
		p = p->next;
	}
	return max;
}
//recursive...
int RMaxNum(struct Node* p) {
	if (p == NULL)
		return 0;
	else {
		if (RMaxNum(p->next) > p->data)
			return RMaxNum(p->next);
		else
			return p->data;
	}
}
//method 1:
//iterative...
struct Node* Search(struct Node* p, int key) {
	while (p != NULL) {
		if (key == p->data)
			return p;
		p = p->next;
	}
	return NULL;
}
//recursive...
struct Node* RSearch(struct Node* p, int key) {
	if (!p)
		return NULL;
	if (key == p->data)
		return p;
	else
		return RSearch(p->next, key);
}
//method 2:
struct Node* Search2(struct Node* p, int key) {
	Node* q = NULL;
	while (p != NULL) {
		if (key == p->data) {
			q->next = p->next;
			p->next = first;
			first = p;
			return p;
		}
		q = p;
		p = p->next;
	}
	return NULL;
}
//INSERTION OPERATION...
void Insert(struct Node* p, int index, int x) {
	struct Node* t;
	if (index < 0 || index > Count(p))
		return;
	t = (struct Node*)malloc(sizeof(struct Node));
	t->data = x;
	if (index == 0) {
		t->next = first;
		first = t;
	}
	else if (index > 0) {
		for (int i = 0; i < index - 1; i++) {
			p = p->next;
		}
		t->next = p->next;
		p->next = t;
	}
}
//Deletion...
int Delete(struct Node* p, int index) {
	struct Node* q = NULL;
	int x = -1;
	if (index <1 || index > Count(p))
		return -1;
	if (index == 1) {
		q = first;
		x = first->data;
		first = first->next;
		delete q;
		return x;
	}
	else if (index > 1) {
		for (int i = 0; i < index - 1; i++) {
			q = p;
			p = p->next;
		}
		q->next = p->next;
		x = p->data;
		delete p;
	}
	return x;
}
//method 1...data reverse
void  Reverse1(struct Node* p) {
	struct Node* q = p;
	int i = 0;
	int* A = (int*)malloc(sizeof(int) * Count(p));
	while (q != NULL) {
		A[i] = q->data;
		q = q->next;
		i++;
	}
	q = p;
	i--;
	while (q) {
		q->data = A[i];
		q = q->next;
		i--;
	}
}
//meethod 2,reversing links...
void Reverse2(struct Node* p) {
	struct Node* q = NULL, * r = NULL;
	while (p != 0) {
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	first = q;
}

int main() {
	int A[] = { 2,4,6,8,10,12 };
	create(A, 6);
	cout << "ITERATIVE DISPLAY: ";
	Display(first);
	cout << "RECURSIVE DISPLAY: ";
	RDisplay(first);
	cout << endl << "Length of LinkedList: " << Count(first) << "  " << RCount(first) << endl;
	cout << "sum: " << Add(first) << "  " << RAdd(first) << endl;
	cout << "Max number: " << MaxNum(first) << "  " << RMaxNum(first) << endl;
	cout << Search(first, 8) << "  " << RSearch(first, 8) << "  " << Search2(first, 8) << endl;
	cout << "====INSERTION OPERATION====" << endl;
	Insert(first, 0, -2);
	Insert(first, 4, 25);
	Insert(first, 8, 100);
	Display(first);
	cout << "====DELETION OPERATION====" << endl;
	cout << Delete(first, 3) << endl;
	Display(first);
	cout << Delete(first, 14) << endl;
	Display(first);
	cout << "====REVERSE====" << endl;
	Reverse1(first);
	Display(first);
	Reverse2(first);
	Display(first);
	return 0;
}


//                                  C++

//#include <iostream>
//using namespace std;
//
//class Node{
//public:
//    int data;
//    Node* next;
//};
//
//int main() {
//
//    int A[] = {3, 5, 7, 10, 15};
//
//    Node* head = new Node;
//
//    Node* temp;
//    Node* last;
//
//    head->data = A[0];
//    head->next = NULL;
//    last = head;
//
//    // Create a Linked List
//    for (int i=1; i<sizeof(A)/sizeof(A[0]); i++){
//
//        // Create a temporary Node
//        temp = new Node;
//
//        // Populate temporary Node
//        temp->data = A[i];
//        temp->next = NULL;
//
//        // last's next is pointing to temp
//        last->next = temp;
//        last = temp;
//    }
//
//    // Display Linked List
//    Node* p = head;
//
//    while (p != NULL){
//        cout << p->data << " -> " << flush;
//        p = p->next;
//    }
//
//    return 0;
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
