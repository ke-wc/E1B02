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
		for(k=0;k<1+i*2;k++)
			printf("*");
		printf("\n");
	}
	scanf("%c",&a);
	fflush(stdin);
	
	system("cls");
	
	//2.
	printf("enter password 4 numbers==> ");
	scanf("%d",&password);
	if(password=2024){
		scanf("%c",&a);
		system("cls");
 		}else{
			printf("incorrect\n");
			system("pause");
			return 0;
	}
		
	
	system("pause");
	return 0;
}
