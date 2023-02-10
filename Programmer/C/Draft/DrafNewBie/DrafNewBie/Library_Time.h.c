#include <stdio.h> 
#include <time.h> 
int main(){ 
	struct tm t; struct tm t2;
	/* Quantrimang.com */ 
	t.tm_sec = 15;
	t.tm_min = 16;
	t.tm_hour = 6;
	t.tm_mday = 18;
	t.tm_mon = 6;
	t.tm_year = 118;
	t.tm_wday = 5;

	t2.tm_sec = 16;
	t2.tm_min = 16;
	t2.tm_hour = 6;
	t2.tm_mday = 18;
	t2.tm_mon = 6;
	t2.tm_year = 118;
	t2.tm_wday = 5;

	char a[] = "Hello world";
	int b = 9;
	float c = 10.9;

	puts(asctime(&t));
	printf("Hello world");
	if(&t>&t2)
		printf("%s", asctime(&t));
	else
		printf("%s", asctime(&t2));
	printf("Hello world");

	getchar();
	return(0);
}