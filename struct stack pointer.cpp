#include "stdafx.h"
#include <iostream>
using namespace std;

struct Stack {
	int *arr;
	int top;
	int size;
};
void init(Stack *&ptr);
void push(Stack *&ptr, int value);
void print(Stack *&ptr);
void pop(Stack *&ptr);
int main()
{
	int value,choise;
	Stack *o;
	init(o);
	cout << "Stack size by defult 10 " << endl<<endl <<endl;
	cout << "enter 1 to push" << endl;
	cout << "enter 2 to pop" << endl;
	cout << "enter 3 to print" << endl;
	cout << "enter 0 to exit" << endl;
	cin >> choise;
	while (choise!=0) {
		switch (choise) {
			case 1:
				cout << "enter valu to push" << endl;
				cin >> value;
				push(o, value);
				cout << "enter unother choise" << endl;
				cin >> choise;
				break;
			case 2:
				pop(o);
				cout << "enter unother choise" << endl;
				cin >> choise;
				break;
			case 3:
				print(o);
				cout << "enter unother choise" << endl;
				cin >> choise;
				break;
		
		}	
	}

}


void init(Stack *&ptr) {
	ptr = new Stack;
	ptr->size = 4;
	ptr->arr = new int[ptr->size];
	ptr->top = -1;
	
}
void push(Stack *&ptr,int value) {
	if (ptr->size != ptr->top + 1) {
		ptr->top++;
		ptr->arr[ptr->top] = value;
	}
	else {
		cout << "stack is full" << endl;
	}

}
void print(Stack *&ptr) {
	cout << "_________" << endl;
	if (ptr->top == -1) {
		cout << "stack is empty" << endl;
	}
	else {
		for (int i = 0; i <= ptr->top; ++i) {
			cout << ptr->arr[i] << endl;
		}
	}
	
}
void pop(Stack *&ptr) {
	if (ptr->top != -1) {
		ptr->top--;
	}
	else {
		cout << "stack is empty" << endl;
	}

}