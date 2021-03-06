#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

bool isUniqueChars(string);
int stringlength(string check);


int main() {
	string check = "abcd z";
	cout<<isUniqueChars(check);
}

bool isUniqueChars(string check) {
	int length = stringlength(check);
	int asciicode_97;
	int bitarray = 0;
	int newBit =0;
	for (int i = 0; i < length; i++) {
		asciicode_97 = check[i]-97;
		newBit |= (1 << asciicode_97);
		if (bitarray != newBit) {
			bitarray |= (1 << asciicode_97);
		}
		else {
			return false;
		}
	}
	return true;
}

int stringlength(string check) {
	int count = 0;
	int i = 0;
	while (check[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}


