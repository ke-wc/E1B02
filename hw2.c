#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,password=0,wrong=0;
	char tem;
	//第一題倒三角 
	for(i=20;i>=1;i--){
		for(j=1;j<=i;j++){ 
		printf("*");
		}
		printf("\n"); 
	}
	scanf("%c",&tem);
	system("cls");
	
	
	for(i=1;i<=3;i++){
		printf("enter the password==>");
		scanf("%d",&password);
		if(password==2025){
			printf("correct\n");
			break;
			}else{
				printf("wrong\n");
				wrong++;		
		}
		
	} 
	if(wrong==3){
		system("pause");
		return 0;
	}
	printf("123");
	system("pause");
	return 0;
}
