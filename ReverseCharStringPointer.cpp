#include "stdafx.h"
#include <iostream>


using namespace std;
void reverse(char * ptr);

int main() {
	char string[] = "Hello";
	reverse(string);
	cout << string <<endl;
}

void reverse(char * ptrstrig) {
	char * stringend = ptrstrig;
	while (*stringend) {
		++stringend;
	}
	--stringend;
	int tmp;
	while (ptrstrig < stringend) {
		tmp = *ptrstrig;
		*ptrstrig = *stringend;
		*stringend = tmp;
		ptrstrig++;
		stringend--;
	}

}