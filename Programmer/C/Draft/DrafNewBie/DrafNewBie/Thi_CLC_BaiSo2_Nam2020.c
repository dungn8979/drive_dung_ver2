#pragma region README
/*
>cho t là số bộ số, cho n là số phần tử trong mỗi bộ số, cho 1 dãy số nguyên
>điểm thưởng là tổng các số được tính theo 3 tiêu chí sau: chọn 1 số trong dãy số
-nếu số có 2 số liền kề thì điểm thưởng bằng trung bình cộng của 2 số liền kề
-nếu số có 1 số liền kề thì điểm thưởng bằng số liền kề
-nếu số không có số liền kề thì điểm thưởng bằng 0
>chọn số xong thì xóa số đó khỏi dãy số
>tính tổng điểm thưởng lớn nhất tìm được và in ra màn hình (1 chữ số thập phân sau dấy .)

mẫu
t
n n1 n2 n3 ...
n n1 n2 n3 ...
nt n1 n2 n3 ...

vd
input
2
3 1 2 3
4 2 0 1 4

output
5.0
5.5

đề clc câu 2
*/

#pragma endregion

#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

int t, arrMain[LENGTH][LENGTH]; //mang 2 chieu: luu tru toan bo du lieu cua t, n, day so
double sum[LENGTH];

void GetData() {
	int i, j;
	for (i = 0; i < t; i++) {
		scanf("%d", &arrMain[i][0]); // nhap n
		arrMain[i][1] = -1; // danh dau mo dau day

		//nhap vao cac phan tu cua day
		for (j = 2; j <= arrMain[i][0] + 1; j++)
			scanf("%d", &arrMain[i][j]);

		arrMain[i][arrMain[i][0] + 2] = -1; //danh dau ket thuc day
	}
}

int* GetSerialNumberToOneDimensionalArray(int arr[][LENGTH], int soPhanTu, int sttBoSo) {
	int i, * pArrOneDimensionalArray = (int*)malloc((soPhanTu + 3) * sizeof(int));
	pArrOneDimensionalArray[0] = soPhanTu; //lưu trữ số phần tử của dãy số
	pArrOneDimensionalArray[1] = pArrOneDimensionalArray[soPhanTu + 2] = -1; //đánh dấu bắt đầu và kết thúc dãy số

	for (i = 2; i <= soPhanTu + 1; i++)
		pArrOneDimensionalArray[i] = arr[sttBoSo][i];

	//pArrOneDimensionalArray: [soPhanTu,-1,item1,item2,-1] soPhanTu = só các phần tử của dãy số
	return pArrOneDimensionalArray;
}

//sttBoSo bat dau tu 0
void Recursive(int arrOneDimensionalArray[], int soPhanTu, int sttBoSo, double sumTempParameter) {
	int i, count = 0;
	double sumTemp = 0;
	sumTemp = sumTempParameter;
	int* parrTemp = (int*)malloc((soPhanTu + 3) * sizeof(int));

	parrTemp[0] = soPhanTu;
	parrTemp[1] = parrTemp[soPhanTu + 2] = -1;
	for (i = 2; i <= soPhanTu + 1; i++) //gán các item của dãy số bắt đầu từ i=2; các i còn lại dùng để đánh dấu bắt đầu và kết thúc phần tử còn i=0 là để lưu số item của dãy số
		*(parrTemp + i) = arrOneDimensionalArray[i];

	//kiem tra cac phan tu da bi xoa het hay chua
	for (i = 2; i <= soPhanTu + 1; i++) {
		if (parrTemp[i] == -1) count++;
	}
	//neu cac phan tu cua day deu bi xoa thi tinh tong cuoi cung va return
	if (count == soPhanTu) {
		if (sum[sttBoSo] < sumTemp) sum[sttBoSo] = sumTemp;
		free(parrTemp);
		return;
	}

	/// summary
	/// nang cap: thay the mang 2 chieu thanh mang 1 chieu, test cap phat vung nho cho parrTemp, thay con tro bang mang 1 chieu, nang cap sumTemp cu sau 1 lan tinh xong diem thuong thi sumTemp lai giam xuong (đã nâng cấp xong)
	/// summary

	//kiem tra cac truong hop tinh diem thuong thoa man
	for (i = 2; i <= soPhanTu + 1; i++) {
		//chon so da bi xoa
		if (parrTemp[i] == -1) continue;
		//chon so ko co so lien ke
		if (parrTemp[i - 1] == -1 && parrTemp[i + 1] == -1) {
			sumTemp += 0;
			int itemTemp = parrTemp[i];
			parrTemp[i] = -1;
			Recursive(parrTemp, soPhanTu, sttBoSo, sumTemp);
			parrTemp[i] = itemTemp;
		}
		//chon so co 1 so lien ke ben trai
		if (parrTemp[i - 1] != -1 && parrTemp[i + 1] == -1) {
			double sumTemp2 = parrTemp[i - 1];
			sumTemp += sumTemp2;
			int itemTemp = parrTemp[i];
			parrTemp[i] = -1;
			Recursive(parrTemp, soPhanTu, sttBoSo, sumTemp);
			sumTemp -= sumTemp2;
			parrTemp[i] = itemTemp;
		}
		//chon so co 1 so lien ke ben phai
		if (parrTemp[i - 1] == -1 && parrTemp[i + 1] != -1) {
			double sumTemp2 = parrTemp[i + 1];
			sumTemp += sumTemp2;
			int itemTemp = parrTemp[i];
			parrTemp[i] = -1;
			Recursive(parrTemp, soPhanTu, sttBoSo, sumTemp);
			sumTemp -= sumTemp2;
			parrTemp[i] = itemTemp;
		}
		//chon so co 2 so lien ke
		if (parrTemp[i - 1] != -1 && parrTemp[i + 1] != -1) {
			double sumTemp2 = ((double)(parrTemp[i - 1] + parrTemp[i + 1])) / 2;
			sumTemp += sumTemp2;
			int itemTemp = parrTemp[i];
			parrTemp[i] = -1;
			Recursive(parrTemp, soPhanTu, sttBoSo, sumTemp);
			sumTemp -= sumTemp2;
			parrTemp[i] = itemTemp;
		}
	}
}


void PrintBonusMark() {
	int i;
	for (i = 0; i < t; i++)
		printf("%.1f\n", sum[i]);
}

void main() {
	int i, soPhanTu, sttBoSo; //soPhanTu là số lượng phần tử của dãy số
	int* pArrOneDimensionalArray; //dùng con trỏ để lưu data dãy số
	scanf("%d", &t); //nhap t
	GetData(); //nhap du lieu vao mang arrMain

	for (i = 0; i < t; i++) {
		soPhanTu = arrMain[i][0]; //soPhanTu la so item
		sttBoSo = i; //sttBoSo so stt cua bo so trong t bo so
		pArrOneDimensionalArray = (int*)malloc((soPhanTu + 3) * sizeof(int)); //ca[ phat bo nho cho cac item va 3 phan tu [soPhanTu,-1,...,-1]

		//pArrOneDimensionalArray: [soPhanTu,-1,item1,item2,-1] soPhanTu= so phan tu item
		pArrOneDimensionalArray = GetSerialNumberToOneDimensionalArray(arrMain, soPhanTu, sttBoSo);

		Recursive(pArrOneDimensionalArray, arrMain[i][0], i, 0);
		free(pArrOneDimensionalArray);
	}

	PrintBonusMark();

	getchar();
	getchar();
}