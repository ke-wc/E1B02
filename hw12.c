#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,j,k,password;
	char a;
	//1.
	for(i=0;i<20;i++){
		for(j=19-i;j>0;j--)
			printf(" ");
		for(k=0;k<i*2;k++)
			printf("*");
		printf("\n");
	}
	scanf("%c",&a);
	fflush(stdin);
	
	system("cls");
	
		
	
	system("pause");
	return 0;
}
