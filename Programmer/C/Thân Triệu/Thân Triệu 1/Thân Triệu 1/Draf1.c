#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


int main() {
	//char c1 = 'A';
	//char c2='a';
	//c2 = toupper(c1);
	//printf("%c", c1);
	//printf("%c", c2);

	char *a1 = "1.23well";
	char* p1=(char*)malloc((sizeof(char)*100));
	char c1[100];
	double d1 = strtod(a1, &p1);
	printf("%lf", d1);
	printf("%c", *p1);

	getchar();
	return 0;
}