#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input;
	
	printf("정수 하나를 입력하세요: ");
	scanf("%d", &input);
	
	if(input>0)
	  printf("이 수는 양수입니다.\n");
	  
    else if(input<0)
	  printf("이 수는 음수입니다.\n");
	  
	else
	  printf("이 수는 0입니다.\n");
	  	
	system("PAUSE");  	
	return 0;
}
