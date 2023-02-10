#include <stdio.h>

unsigned long long giaiThua(int n) {
	if (n >= 2) return n * giaiThua(n - 1);
	else if (n == 1) return 1;
	else return -1;
}

void main() {
	printf("%lld", giaiThua(20));
}