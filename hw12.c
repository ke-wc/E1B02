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
	if(password==2024){
		scanf("%c",&a);
		system("cls");
 		}else{
			printf("incorrect\n");
			system("pause");
			return 0;
	}
	//3.
	printf("'A'..........'Z':Uppercase\n");
	printf("'a'..........'z':Lowercase\n");
	printf("'0'..........'9':Digit\n");
	printf("otherwise:E1B02黃詩祐\n");
		
	scanf("%c",&a);	
	fflush(stdin);
	system("cls");
	
	//4.
	char ch;
	printf("enter a char==>");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z'){
		printf("Uppercase\n");
		}else if(ch>='a'&&ch<='z'){
			printf("Lowercase\n");
			}else if(ch>='0'&&ch<='9'){
				printf("Digit\n");
				}else{
					printf("E1B02黃詩祐\n");
				
				}
	fflush(stdin);
	scanf("%c",&a);	
	fflush(stdin);
	system("cls");	
	//5
	printf("心得：第一題我用for迴圈，外層迴圈控制金字塔的行數 中層迴圈控制前面的空格 內層迴圈 輸出*號1357...第一題因為無法確定如何讓星星成1 3 5 7..輸出而少打了加1\n "); 
	printf("心得：第二題我用if else做題如果password=2024便清除否則結束但是因為未明白== =的差別==為比較運算值=為賦予2024\n");
	printf("心得：第三題就printf題目\n");
	printf("心得：第四題我用if else解題if 輸入值ch在A~Z裡面便是Uppercase，輸入值ch在a~z裡面便是Lowercase，輸入值ch在0~9裡面便是Digit,其他便是E1B02黃詩祐，這題讓我對於字元範圍的控制和要用if else 時要加上括號才能讓");
	printf("else找到if");
	system("pause");
	return 0;
}
