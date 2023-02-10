#include <stdio.h>

int* ArrayMethod(int* k, int length) {
	int i, * p = k;
	static int arrReturn[3];
	for (i = 0; i < length; i++)
		arrReturn[i] = *(k + i);
	return p;
}

void PrintArray(int arr[], int length) {
	int i;
	for (i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
}

void main() {
	int a[] = { 1,2,3 };
	int* b;
	int* p = a;
	b = ArrayMethod(a, 3);
	PrintArray(b, 3);
}

/* Note
-thuyen vao mang hay con tro deu duoc
-parameter la mang hay con tro deu duoc

-return mang hay con tro deu duoc
-bien nhan return phai la mot con tro ko the la mang
*/