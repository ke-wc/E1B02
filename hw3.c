#include<stdio.h>
#include<stdlib.h>
#include<windows.h> 
#include <time.h>
#define SIZE 9
int main(void)
{
	int i=0,j=10,password=0,wrong=0,n,found=0,ok,k;
	char cha,good;
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
	
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			seats[i][j]='_';
		}
	}
		srand(time(NULL));
		for (i = 0; i < 10;) {
        int r = rand() % 9;  
        int c = rand() % 9;  
        if (seats[r][c] != '*') {
        seats[r][c] = '*';  
        i++;
    }
}
	while(1){
	printf("a. Available seats\n");
	printf("b. Arrange for you\n");
	printf("c. Choose by yourself\n");
	printf("d. Exit\n");
	
	printf("輸入==>");
	scanf("%c",&cha);
	
	if(cha=='a'||cha=='A'){
		printf("\\123456789\n");
		for(i = 0; i < 9; i++) {
        printf("%d", 9 - i);  
        for(j = 0; j < 9; j++) {
            printf("%c", seats[i][j]);  
        }
        printf("\n");  
    }
}
	system("pause\n");
	system("cls");

	if(cha=='b'||cha=='B'){
	printf("需要幾個座位(1-4)==>");
	scanf("%d",&n);	
	 if (n >= 1 && n <= 3) {
               
                for (i = 0; i < SIZE && !found; i++) {
                    for (j = 0; j <= SIZE - n; j++) {
                        ok = 1;
                        for (k = 0; k < n; k++) {
                            if (seats[i][j + k] != '_') {
                                ok = 0;
                                break;
                            }
                        }
                        if (ok) {
                            for (k = 0; k < n; k++) {
                                seats[i][j + k] = '@';  
                            }
                            found = 1;  
                            break;
                        }
                    }
                }
            }

            if (found) {
                 printf("\\123456789\n");
    		for (i = 0; i < SIZE; i++) {
        printf("%d", SIZE - i);  // 打印行號
        for (j= 0; j < SIZE; j++) {
            printf("%c", seats[i][j]);  // 打印每個座位的狀態
        }
        printf("\n");
    }
}

            printf("是否滿意建議的座位？(y/n)：");
            scanf(" %c", &good);

            if (good == 'y' || good == 'Y') {
    
                system("cls");
            } else {
                for (i = 0; i < SIZE; i++) {
                    for (j = 0; j < SIZE; j++) {
                        if (seats[i][j] == '@') {
                            seats[i][j] = '*';
                        }
                    }
                }
                system("cls");
            }
 	}
    }
	system("pause");
	return 0;	
}


