#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i=0,j=0,password=0,wrong=0;
	char tem,cha,cha1;
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
	
	/*printf("enter a(A) or b(B) or c(C)==>");
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
	int trans=cha1-'a',k;
	for(i=0;i<=trans;i++){
		for(k=0;k<trans-i;k++){
			printf(" ");	
		}		
		for(j=trans-i;j<=trans;j++){
			printf("%c",'a'+j);
		}
		printf("\n");
	}*/
	//�ĥ|�D 
	int cha2=0;
	if(cha=='B'||cha=='b'){
		printf("enter the number between 0 and 9==>");
		scanf("%d",&cha2);
		for(;;){
			if(cha2>=1&&cha2<=9){
				break;
			}else{
				printf("reenter the number==>");
				scanf("%d",&cha2);
				continue;
			}
		}
	}
	
	for(i=1;i<=cha2;i++){
		for(j=1;j<=cha2;j++){
			printf("%d*%d ",i,j);
		}
		printf("\n");
	}
	//�Ĥ��D
	printf("c");
	system("pause");
	return 0;
}
