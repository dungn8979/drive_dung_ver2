#include <stdio.h>

void ShortDecreaseOneDimensionalIntArray(int arr[], int n) {
	//Kiem tra xem cac phan tu cua mang dc truyen vao
	for (size_t i = 0; i < 3; i++)
		printf("%d\n", arr[i]);

	//bat dau qua trinh sap xep phan tu cua mang
	for (size_t i = 0; i < n-1; i++)
	{
		for (size_t j = 0; j < n-i-1; j++)
		{
			if (arr[j] < arr[j + 1]) {
				int intermediate = 0;
				intermediate = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = intermediate;
			}
		}
	}
}

void main() {
	int arr[3] = { 0,5,3 };
	ShortDecreaseOneDimensionalIntArray(arr, 3); //truyen vao 1 mang kieu int va so luong phan tu cua mang
	for (size_t i = 0; i < 3; i++) //in ra ca phan tu cua mang da duoc sap xep
		printf("%d  ",arr[i]);

	getchar();
}