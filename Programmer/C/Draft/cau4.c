#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct hs {
	char hTen[50];
	double dToan;
	double dVan;
	double dAnh;
} hs;

void SwapString(char a[30], char b[30]) {
	char temp[50];
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

void SwapDouble(double* a, double* b) {
	double temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int n, i, j;
	scanf("%d", &n);
	hs lop[10]; //mang luu tru danh sach hoc sinh
	double dtb[10]; //mang luu tru diem trung binh co thu tu tuong ung voi thu tu hoc sinh trong mang lop
	for (i = 0; i < n; i++) {
		getchar();
		fgets(lop[i].hTen, 50, stdin);
		scanf("%lf %lf %lf", &lop[i].dToan, &lop[i].dVan, &lop[i].dAnh);
		dtb[i] = (lop[i].dToan + lop[i].dVan + lop[i].dAnh) / 3;
	}

	//sap xep mang diem trung binh
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			//kiem tra 2 diem trung binh ke nhau xem co theo thu tu sap xep khong
			if (dtb[j] < dtb[j + 1]) {
				//doj cho cho 2 djem trung binh cua 2 hoc sjnh trong mang dtb
				SwapDouble(&dtb[j], &dtb[j + 1]);

				//doj cho cho 2 hoc sjnh trong mang lop
				//doj cho ho ten
				SwapString(lop[j].hTen, &lop[j + 1].hTen);
				//doj cho djem toan
				SwapDouble(&lop[j].dToan, &lop[j + 1].dToan);
				//doj cho djem van
				SwapDouble(&lop[j].dVan, &lop[j + 1].dVan);
				//doj cho djem toan
				SwapDouble(&lop[j].dAnh, &lop[j + 1].dAnh);
			}
		}
	}
	fflush(stdin);

	//in ra man hinh top 3 hoc sinh co dtb cao 
	for (i = 0; i < 3; i++) {
		printf("\n%s %.2lf", lop[i].hTen, dtb[i]);
	}

	getchar();
	getchar();
	return 0;
}
