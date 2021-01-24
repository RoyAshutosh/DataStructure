// stackDS_LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include<stdlib.h>
using namespace std;
struct Node {
    int data;
    struct Node* next;
};
struct Node *top = NULL;
void Push(int x) {
    struct Node* t;
    t = (struct Node*)malloc(sizeof(struct Node));
    if (t == NULL)        //that means heap is full so stack is also full ,no nmemory to create a new node....
        cout << ("!!! Stack is Full") << endl;
    else {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int Pop() {
    int x = -1;
    struct Node* t;
    if (top == NULL)
        cout << "!!! There is no elements in Stack" << endl;
    else {
        t = (struct Node*)malloc(sizeof(struct Node));
        t = top;
        top = top->next;
        x = t->data;
        free(t);              
        //delete t;
    }
    return x;
}
void Dispaly() {
    struct Node* p;
    p = top;
    while (p) {
        cout << p->data << endl;
        p = p->next;
    }
    cout<< endl;
}

int main()
{
    Push(10);
    Push(20);
    Push(30);
    Push(40);
    Push(50);
    Push(60);
    Dispaly();
    cout<<"pop: "<<Pop()<<endl;
    Push(100);
    Dispaly();
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
