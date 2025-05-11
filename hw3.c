#include<stdio.h>
#include<stdlib.h>
#include<windows.h> 
#include <time.h>
#define SIZE 9
int main(void)
{
	int i=0,j=10,password=0,wrong=0,n,found=0,ok,k,seats1,seats2;
	char cha,good,da;
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
	scanf(" %c",&cha);
	
	if(cha=='a'||cha=='A'){
		printf("\\123456789\n");
		for(i = 0; i < 9; i++) {
        printf("%d", 9 - i);  
        for(j = 0; j < 9; j++) {
            printf("%c", seats[i][j]);  
        }
        printf("\n");  
    }

	system("pause\n");
	system("cls");
	//1-3
	}else if(cha=='b'||cha=='B'){
	printf("需要幾個座位(1-4)==>");
	scanf(" %d",&n);	
	for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (seats[i][j] == '@') {
                seats[i][j] = '*';  
            }
        }
    }

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
            } else if (n == 4) {
        if (!found) {
            for (i = 0; i < 9 && !found; i++) {
                for (j = 0; j <= 5; j++) {
                    int ok = 1;
                    for (k = 0; k < 4; k++) {
                        if (seats[i][j + k] != '_') {
                            ok = 0;
                            break;
                        }
                    }
                    if (ok) {
                        for (k = 0; k < 4; k++) 
                            seats[i][j + k] = '@';
                        found = 1;
                        break;
                    }
                }
            }
        }
		if (!found) {
            for (i = 0; i < 8 && !found; i++) {
                for (j = 0; j <= 7; j++) {
                    if (seats[i][j] == '_' && seats[i][j + 1] == '_' && seats[i + 1][j] == '_' && seats[i + 1][j + 1] == '_') {
                        seats[i][j] = seats[i][j + 1] = seats[i + 1][j] = seats[i + 1][j + 1] = '@';
                        found = 1;
                        break;
                    }
                }
            }
        }
    }

        if (found) {
        printf("\\123456789\n");
    	for (i = 0; i < SIZE; i++) {
        printf("%d", SIZE - i);  
        for (j= 0; j < SIZE; j++) {
            printf("%c", seats[i][j]);  
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
                found=0;
                system("cls");
            }
 	
    
	
    }else if(cha=='c'||cha=='C'){
    	while (1) {
        printf("輸入一個位置==>");
        scanf(" %d %d", &seats1, &seats2);
        if (seats1 >= 1 && seats1 <= SIZE && seats2 >= 1 && seats2 <= SIZE) {
            if (seats[seats1 - 1][seats2 - 1] == '_') {
                seats[seats1 - 1][seats2 - 1] = '@';
                break;  
            } else {
                printf("已被佔用重新輸入。\n");
            }
        } else {
            printf("無效的座位重新輸入。\n");
        }
    }
	 printf("\\123456789\n");
     for (i = 0; i < SIZE; i++) {
        printf("%d", SIZE - i);  
        for (j = 0; j < SIZE; j++) {
            printf("%c", seats[i][j]);  
        }
        printf("\n");
    }
    for (i = 0; i < SIZE; i++) {
            for (j = 0; j < SIZE; j++) {
                if (seats[i][j] == '@') {
                    seats[i][j] = '*'; 
                }
            }
        }
    system("pause");
    system("cls");
	}else if(cha=='d'||cha=='D'){
		printf("end?(y/n)");
		scanf(" %c",&da);
		if(da=='n'){
			continue;
			system("cls");
		}else{
		break;
		}
	}
}
	system("pause");
	return 0;	
}


