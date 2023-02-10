#include <stdio.h>

void xoa_so_nguyen_to(int array[], int n) {
	int i, j, count=0;
	for (i = 0; i < n; i++) {
		if (array[i] == 0 || array[i] == 1) count++;
		else {
			for (j = 2; j < array[i]; j++)
				if (array[i] % j == 0) count++;
		};
		if(count==0){
			for(j=n; j>i; j--){
				array[j-1]=array[j];
			}
			n--;
		} 
		count=0;
	}
}

int main() {
	int ary[] = { 2, 4, 6, 7,10 };
	int a = '\0';
	xoa_so_nguyen_to(ary, 5);
	return 0;
}
