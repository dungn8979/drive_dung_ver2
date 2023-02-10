#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(NULL)); //de thay doi day so random moi lan chay chuong trinh
	for (int i = 0; i < 100; i++)
		printf("%3d", 1 + rand() ); //rand()%6 la 0-5
}