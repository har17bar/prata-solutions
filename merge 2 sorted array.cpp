#include <iostream>
using namespace std;

void sort(int arr1[], int arr2[], int *result, int size1, int size2);


int main() {
	int arr1[] = { 1, 4, 5, 7 };
	int arr2[] = { 2, 4, 6 };
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	int * result = new int[size1 + size2];
	sort(arr1, arr2,result,  size1, size2);

	
	for (int i = 0; i < size1+ size2; ++i) {
		cout << result[i] <<endl;
	}
	
}

void sort(int arr1[], int arr2[],int *result, int size1, int size2) {
	int i1x = 0, j2x = 0, kx = 0;

	while (i1x<size1 && j2x<size2) {
		if (arr1[i1x] <= arr2[j2x]) {
			result[kx] = arr1[i1x];
			++i1x;
		}
		else {
			result[kx] = arr2[j2x];
			++j2x;
		}
		kx++;
	}
	while (i1x < size1) {
		result[kx] = arr1[i1x];
		kx++;
		i1x++;
	}
	while (j2x < size2) {
		result[kx] = arr2[j2x];
		kx++;
		j2x++;
	}

}
