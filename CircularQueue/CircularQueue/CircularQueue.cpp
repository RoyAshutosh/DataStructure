// CircularQueue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdlib.h>
using namespace std;

struct Queue {
	int size;
	int front;
	int rear;
	int* Q;
};
void Create(struct Queue* q, int size) {
	q->size = size;
	q->front = q->rear = 0;
	q->Q = (int*)malloc(q->size * sizeof(int));
}
void Enqueue(struct Queue* q, int x) {
	if ((q->rear+1)% q->size==q->front)
		cout << "QUEUE IS FULL!!!" << endl;
	else {
		q->rear= (q->rear + 1) % q->size;
		q->Q[q->rear] = x;
	}
}
int Dequeue(struct Queue* q) {
	int x = -1;
	if (q->front == q->rear)
		cout << "QUEUE IS EMPTY!!!" << endl;
	else {
		q->front=(q->front + 1) % q->size;
		x = q->Q[q->front];
	}
	return x;
}
void Display(struct Queue q) {
	int i = q.front + 1;
	do {
		cout << q.Q[i]<<" ";
		i = (i + 1) % q.size;
	} while (i!=(q.rear+1)%q.size);
	cout << endl;
}

int main() {
	struct Queue q;
	Create(&q, 5);
	Enqueue(&q, 1);
	Enqueue(&q, 10);
	Enqueue(&q, 100);
	Enqueue(&q, 1000);
	Enqueue(&q, 10000);
	Enqueue(&q, 100);
	Enqueue(&q, 1000);
	Enqueue(&q, 10000);
	Display(q);
	cout << "DELETED VALUE IS: " << Dequeue(&q) << endl;
	Display(q);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
