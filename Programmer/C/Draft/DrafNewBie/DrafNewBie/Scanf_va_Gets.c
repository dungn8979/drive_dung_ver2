#include <stdio.h>

void main() {
	//scanf
	char a[100];
	char b[100] = "hello world";
	scanf("%[^\n]s",&a);
	while (getchar() != '\n');
	scanf("%[^\n]s",&b);
	printf("a: %s\nb: %s\n", a, b);
	printf("length a: %d\nlength b: %d\n", strlen(a), strlen(b));
	printf("a: %d\nb: %d", a, b); // chu y trong compile c online thi dong nay bi loi

	////gets
	//char a[100] = "hello world";
	//char b[100] = "hello world";
	//gets(a);
	//gets(b);
	//printf("a: %s\nb: %s\n", a, b);
	//printf("length a: %d\nlength b: %d\n", strlen(a), strlen(b));
	//printf("a: %d\nb: %d", a, b);

	getchar();
}

/*
Note
-ham scanf van co the gan gia tri cho bien da co truoc do

-ham gets van co the gan gia tri cho bien da co truoc do
-dung ham gets thi du lieu nhap vao luon la mot chuoi mac du khai bao bien do co typedata la int, float, double
*/