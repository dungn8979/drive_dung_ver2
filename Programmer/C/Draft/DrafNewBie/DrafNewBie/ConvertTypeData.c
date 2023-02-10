#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
#pragma region Convert type chuoi > type so
	////Cach toi uu nhat:
	////chi dung cho int
	//int aI1 = (int)"34"; //aT1 ko phai la 34
	////atoi
	////chi dung cho int
	//int a2 = atoi("34");
	////sscanf
	////convert 1 chuoi sang int,float,char[],....
 //   int day, year;
	//float hour;
 //   char weekday[20], month[20], dtm[100];
 //   strcpy(dtm, "Tuesday July 12 2016 13.5");

	//sscanf(dtm, "%s %s %d %d %f", weekday, month, &day, &year, &hour); //gan gia tri cua dtm cho cac bien weekday,month,... chuoi thi ko can &
	//// vi du khac cua sscanf:
	/*int a, b;
	char c;
	char chr[] = "123 4567\b";
	sscanf(chr, "%d%d%c", &a, &b, &c);*/

 //   printf("%s %d, %d = %s\n", month, day, year, weekday);
#pragma endregion
	
#pragma region Convert type so > type chuoi
	////cach toi uu nhat: sprintf
	//int itg = 456;
	//char chr[100] = "123";
	//sprintf(chr, "%d va %d", itg,789); //gan gia tri "%d va %d" cho chr ma khong in ra man hinh

	////itoa
	////chi dung cho int
	//int i;
	//char buffer[33];
	//printf("Enter a number: ");
	//scanf("%d", &i);
	//itoa(i, buffer, 10);
	//printf("decimal: %s\n", buffer);
	//itoa(i, buffer, 16);
	//printf("hexadecimal: %s\n", buffer);
	//itoa(i, buffer, 2);
	//printf("binary: %s\n", buffer);
#pragma endregion
	

	getchar();
	getchar();
}

//code copy
//#include <stdio.h> 
//#include <stdlib.h>
//#include <string.h> 
//int main() {
//    int day, year;
//    char weekday[20], month[20], dtm[100];
//    strcpy(dtm, "Tuesday July hello 12 2016");
//    sscanf(dtm, "%s %s hello 12 %d", weekday, month, &day, &year);
//    printf("%s %d, %d = %s\n", month, day, year, weekday);
//
//    getchar();
//    return(0);
//}