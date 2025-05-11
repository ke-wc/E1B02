#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i=0,j=0,password=0,wrong=0,k,cha2;
	char tem,cha,cha1,cha3;
	//第一題倒三角 
	int trans;
	for(i=20;i>=1;i--){
		for(j=1;j<=i;j++){ 
		printf("*");
		}
		printf("\n"); 
	}
	system("pause");
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
		return 0;
	}
	system("pause");
	system("cls");

	system("pause");
	return 0;	

}

