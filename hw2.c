#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,password=0,wrong=0;
	char tem,cha,cha1,k;
	//�Ĥ@�D�ˤT�� 
	/*for(i=20;i>=1;i--){
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
	scanf("%c",&tem);
	system("cls");*/
	
	//�ĤG�D
	/*printf("a. �e�X�����T����\n");
	printf("b. ��ܭ��k��\n");
	printf("c. ����\n");
	//�ĤT�D*/
	
	printf("enter a(A) or b(B) or c(C)==>");
	scanf("%c",&cha);
	if(cha=='A'||cha=='a'){
		scanf("%c",&tem);
		system("cls");
		printf("enter the char a to n==>");
		scanf("%c",&cha1);
		for(;;){
			if(cha1<'a'||cha1>'n'){
			scanf("%c",&cha1);
			printf("reenter the char a to n==>");
			continue;
			}else{
				break;
			}
		}
	}
	for(k='a';k<=cha;k++){
		printf("1");
	}
	
	
	
	 
	system("pause");
	return 0;
}
