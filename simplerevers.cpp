#include "stdafx.h"
#include <iostream>


using namespace std;
void reverse_str(char * ptr);

int main() {
	char string[] = "Hello";
	reverse_str(string);
	cout << string << endl;
}

void reverse_str(char* s) {
	int i = 0;
	int length = strlen(s) - 1;
	int j = strlen(s) - 1;
	char b[] = " ";
	do
	{
		b[0] = s[i];
		s[i] = s[j];
		s[j] = b[0];
		i++;
		j--;

	} while (i<length / 2 && j>length / 2);

}