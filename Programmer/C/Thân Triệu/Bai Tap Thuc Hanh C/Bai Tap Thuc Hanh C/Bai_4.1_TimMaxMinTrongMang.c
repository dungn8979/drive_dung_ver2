#include <stdio.h>

int FindMaxInArray(int arr[1000], int n) {
	int max = arr[0];
	for (size_t i = 0; i < n; i++)
		if (max < arr[i]) max = arr[i];
	return max;
}

int FindMinInArray(int arr[1000], int n) {
	int min = arr[0];
	for (size_t i = 0; i < n; i++)
		if (min > arr[i]) min = arr[i];
	return min;
}

void main() {
	int n, arr[1000];
	int* pn = &n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("Max: %d\n", FindMaxInArray(arr, n));
	printf("Min: %d\n", FindMinInArray(arr, n));

	*pn = 0;
	while(*pn<=0)
	{
		printf("helo\n");
		scanf("%d", pn);
	}
	printf("%d", *pn);

	getchar();
}