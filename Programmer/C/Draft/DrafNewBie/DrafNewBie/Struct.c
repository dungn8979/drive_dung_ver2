#include <stdio.h>
//
//struct sinhvien {
//	char ten[100];
//	int mssv;
//};
//
////thay doi tham so trong ham thi gia trị tuyền vào sẽ bị thay đổi theo
//void MethodTestParameterStruct(struct sinhvien sv) {
//	sv.mssv = 123456789;
//}
//
////thay doi tham so trong ham thi gia trị tuyền vào sẽ bị thay đổi theo
//void MethodTestParameterArray(int arr[]) {
//	arr[0] = 0;
//}
//
//void main() {
//	int i, j, count = 0;
//	int arr1[2] = { 1,2 };
//	char tensv1[10] = "hello";
//	struct sinhvien sv1;
//	strcpy(sv1.ten, "phanvantiendung");
//	sv1.mssv = 20020384;
//	struct sinhvien sv2 = sv1;
//
//	MethodTestParameterStruct(sv1);
//	MethodTestParameterArray(arr1);
//}
#include <stdio.h> 
int main() {
	FILE* fp; char str[60]; 
	/* mo file de doc */
	fp = fopen("baitapc.txt", "r");
	if (fp == NULL) {
		perror("Xay ra loi trong khi doc file");
		return(-1);
	}
	if (fgets(str, 60, fp) != NULL) {
		/* Ghi noi dung len stdout */
		puts(str);
	}
	fclose(fp);
	return(0);
}