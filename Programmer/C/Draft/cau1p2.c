#include <stdio.h>

int main(){
	int i,n;
	scanf("%d",&n);
	int ary[n];
	for(i=0; i<n; i++)
		scanf("%d",&ary[i]);
		printf("in\n");
	for(i=0; i<n; i++)
		printf("[%d]",ary[i]);
	
	return 0;
}
