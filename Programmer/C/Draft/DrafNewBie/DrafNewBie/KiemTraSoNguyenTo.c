#include <stdio.h>
#include <math.h>

void main() {
	int n, count=0,thoat;

	do {
		count = 0;
		puts("Nhap so can kiem tra: ");
		scanf("%d", &n);

		//Check n co phai la so nguyen to hay ko
		for (int i = 1; i < n + 1; i++)
			if ((n % i) == 0) count++;
		
		if (count == 2) printf("%d la so nguyen to", n);
		else printf("%d khong phai la so nguyen to", n);
		puts("\nban muon thoat ko (0:Yes/1:No):");
		scanf("%d", &thoat);
	} while (thoat);
}