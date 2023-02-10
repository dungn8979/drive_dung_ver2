#include <stdio.h>

void GetLength(int arr[]) {
	printf("length: %d\n", (&arr)[1] - arr);
	printf("length: %d\n", (&arr)[1]);
}

void main() {
	/*
	int a[10];
	int* p = a;

	assert(sizeof(a) / sizeof(a[0]) == 10);
	assert(sizeof(p) == sizeof(int*));
	assert(sizeof(*p) == sizeof(int));
	*/

	/*
	signed int a[21];
	a[0] = NULL;
	a[1] = 2;

	int length = sizeof(a) / sizeof(a[0]);
	int length1 = sizeof(int);
	int length2 = sizeof(a[0]);

	printf("%d\n", length);
	printf("%d\n", length1);
	printf("%d\n", length2);
	*/

	/*
	unsigned	int n = 1;
	int arr[55];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i;
	}
	//n = (&arr)[1] - arr;


	printf("length: %d\n", (&arr)[1] - arr);
	GetLength(arr);
	*/

	getchar();
}