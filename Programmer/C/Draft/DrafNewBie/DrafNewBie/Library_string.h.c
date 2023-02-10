#include <stdio.h>
#include <string.h>
/// <summary>
/// note
/// -trong moi chuoi luon co 1 ki tu ket thuc \0 vi vay ma do dai max ki tu co the nhap vao bang strlen(a)-1
/// </summary>

void main() {
	//strlen tim do dai chuoi
	//strcmp so sanh chuoi
	//strcpy gan gia tri cho chuoi
	//strcat cong 2 chuoi
	//strncat cong 2 chuoi
	//strstr cat chuoi tu vi tri co ki tu chon truoc
	//strtok cat chuoi ra nhieu chuoi tu vi tri co ki tu da duoc chon truoc

	/// <summary>
	/// strlen(str) tra ve do dai cua chuoi
	/// </summary>

	/// <summary>
	/// strcmp(str,str) so sanh 2 chuoi
	/// </summary>

	//char strcmpA[100]="abc", strcmpB[100]="aBc";
	//scanf("%s", &strcmpA);
	//scanf("%s", &strcmpB);
	//printf("%d", strcmp(strcmpA, strcmpB));

	/// <summary>
	/// strcpy(str,"") gan gia tri "" cho str
	/// </summary>

	/// <summary>
	/// strcat(str1,str2) cong chuoi 2 vao chuoi 1
	/// </summary>
	//
	//char a[100] = "12345";
	//strcat(a, "678910");
	//printf("%s", a);

	/// <summary>
	/// strncat(str1,str2,n) ham nay ko co gia tri tra ve, n la so ki tu dc them vao str1 (neu n>strlen(str2) thi ham nay giong ham strcat
	/// </summary>
	
	//char a[100] = "12345";
	//strncat(a, "678910", 100);
	//printf("%s", a);

	/// <summary>
	/// strstr(str1,"dsads123") tra ve chuoi tu vi tri co dsads123 cho den cuoi str1
	/// </summary>

	//char str[100] = "Day la mot vi du ve ham strstr() trong c, vi du...";
	//char* sub;
	//sub = strstr(str, "vi");
	//printf("\nChuoi con la: %s", sub);
	
	/// <summary>
	/// strtok(str,chr) cat chuoi str ra cac chuoi nho hon tu vi tri chr
	/// </summary>
	
	//char str[80] = "Hoc C - co ban va nang cao - tai VietJack";
	//const char s[2] = "-";
	//char* token;
	//int strLength = strlen(str); //do dai ki tu ko tinh ki tu ket thuc

	///* lay token dau tien */
	//token = strtok(str, s);

	///* duyet qua cac token con lai */
	//while (token != NULL)
	//{
	//	printf(" %s\n", token);

	//	token = strtok(NULL, "-"); //hoac: token = strtok(NULL, s);
	//}
	//for (size_t i = 0; i < strLength; i++)
	//	printf("%c", *(str + i));

	getchar();
}