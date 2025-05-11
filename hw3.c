#include<stdio.h>
#include<stdlib.h>
#include<windows.h> 
#include <time.h>
int main(void
{
	int i=0,j=0,password=0,wrong=0;
	char cha;
	char seats[9][9];

	//第一題倒三角 

	/*for(i=20;i>=1;i--){
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
	system("cls");*/
	printf("a. Available seats\n");
	printf("b. Arrange for you\n");
	printf("c. Choose by yourself\n");
	printf("d. Exit\n");
	
	printf("輸入==>");
	scanf("%c",&cha);
	
	if(cha=='a'||cha=='A'){
		for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			seats[i][j]='_';
		}
	}
		srand(time(NULL));
		for (i = 0; i < 10; i++) {
        int r = rand() % 9;  
        int c = rand() % 9;  
        seats[r][c] = '*';    
    }
		printf("\\123456789\n");
		for(i = 0; i < 9; i++) {
        printf("%d", 9 - i);  
        for(j = 0; j < 9; j++) {
            printf("%c", seats[i][j]);  
        }
        printf("\n");  
    }
}

	system("pause");
	return 0;	

}

