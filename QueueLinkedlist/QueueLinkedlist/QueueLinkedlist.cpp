// QueueLinkedlist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdlib.h>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
struct Node* front = NULL; struct Node* rear = NULL;

void Enqueue(int x) {
    struct Node* t;
    t = (struct Node*)malloc(sizeof(struct Node));
    if (t==NULL) {
        cout << "!!! QUEUE IS FULL BCS HEAP IS FULL!!!" << endl;
    }
    else {
        t->data = x;
        t->next = NULL;
    }
    if (front == NULL) {
        front = rear = t;
    }
    else {
        rear->next = t;
        rear = t;
    }
}
int Dequeue() {
    int x = -1;
    struct Node* temp;
    if (front == NULL) {
        cout << "!!!QUEUE IS EMPTY!!!" << endl;
    }
    else {
        temp = front;
        x = front->data;
        front = front->next;
        free(temp);
    }
    return x;
}
void Display() {
    struct Node* p=front;
    while (p) {
        cout << p->data<<" ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    Enqueue(10);
    Enqueue(100);
    Enqueue(1000);
    Enqueue(10000);
    Enqueue(100000);
    Display();
    cout << "DEQUEUED ELEMENT:" << Dequeue() << endl;
    Display();
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
