// stackDS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include<stdlib.h>
using namespace std;
struct Stack {
	int size;
	int top;
	int* S;
};
void Create(struct Stack* st) {
	cout << "enter the size of Stack: ";
	cin >> st->size;
	st->top = -1;
	st->S = (int*)malloc(st->size * sizeof(int));
}
void Display(struct Stack st) {
	for (int i = st.top; i >= 0; i--) {
		cout << st.S[i]<<endl;
	}
	cout << endl;
}
void Push(struct Stack* st,int x) {
	if (st->top == st->size-1)
		cout << "!!! STACK OVERFLOW !!!!" << endl;
	else {
		st->top++;
		st->S[st->top] = x;
	}
}
int Pop(struct Stack* st) {
	int el = -1;
	if (st->top == -1)
		cout << "!!! STACK UNDERFLOW !!!" << endl;
	else {
		el= st->S[st->top--];    //in same statement i decremented the Top pos....
	}
	return el;
}
bool IsEmpty(struct Stack st) {
	if (st.top == -1)
		return true;
	return false;
}
bool IsFull(struct Stack st) {
	if (st.top == st.size - 1)
		return true;
	return false;
 }
int StackTop(struct Stack st) {
	if (!IsEmpty(st))
		return st.S[st.top];
	return -1;
}
int Peek(struct Stack st, int index) {
	int x = -1;
	if (st.top - index + 1 < 0)
		cout << "Invalid Index" << endl;
	x = st.S[st.top - index + 1];
	return x;
}

int main()
{
	struct Stack st;
	Create(&st);
	Push(&st, 10);
	Push(&st, 20);
	Push(&st, 40);
	Push(&st, 60);
	Push(&st, 80);
	Push(&st, 100);
	Display(st);
	//cout << "After Poping: " << Pop(&st) << endl;
	Display(st);
	cout << "peek Function" << endl;
	cout << Peek(st, 3) << endl;
	cout << "StackTop Function" << endl;
	cout << StackTop(st) << endl;
	cout<<IsEmpty(st)<<endl;
	cout<<IsFull(st) << endl;
}
