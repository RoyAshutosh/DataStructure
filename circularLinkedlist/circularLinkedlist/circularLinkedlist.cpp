// circularLinkedlist.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include<stdlib.h>
using namespace std;
struct Node {
    int data;
    struct Node* next;
};
struct Node* Head = NULL;

void Create(int A[], int n) {
    struct Node* t,*last;
    Head = (struct Node*)malloc(sizeof(struct Node));
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for (int i = 1; i < n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;            //as last->next pointing to Haad....
        last->next = t;
        last = t;
    }
}
int Length(struct Node* p) {
    int len = 0;
    do {
        len++;
        p = p->next;
    } while (p != Head);
    return len;
}
void Display(struct Node* h) {
    do {
        cout << h->data<<"  ";
        h = h->next;
    } while (h != Head);
        cout << endl;
}
//int f = 0;
void RDispaly(struct Node* h) {
    static int flag = 0;
    if (h != Head || flag == 0) {
        flag = 1;
        //f = 1 ;
        cout << h->data << "  ";
        RDispaly(h->next);
    }
    flag = 0;          //quitting the loop so re-initialize the flag;
    //f = 0;
    cout << endl;
}
void Insert(struct Node *p,int index, int x) {
    struct Node* t;
    if (index<0 || index >Length(p))
        return;
    if (index == 0) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = x;
        if (Head == NULL) {
            Head = t;
            Head->next = Head;
        }
        else {
            while (p->next != Head)
                p = p->next;
            p->next = t;
            t->next = Head;
            Head = t;
        }
    }else {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}

int main()
{
    int Arr[] = { 2,4,6,8,10 };
    Create(Arr, 5);
    Display(Head);
    RDispaly(Head);
    cout << "===INSERT ON A GIVEN INDEX====" << endl;
    Insert(Head, 3, 7);
    Display(Head);
    Insert(Head, 1, 3);
    Display(Head);
    return 0;
}

