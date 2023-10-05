#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input;
	
	printf("정수 하나를 입력하세요: ");
	scanf("%d", &input);
	
	if(input>0)
	  printf("절댓값은 %d 입니다.\n", input);
	  
    else if(input<0)
	  printf("절댓값은 %d입니다.\n", -input);
	  
	else
	  printf("절댓값은  0입니다.\n", input);
	  	
	system("PAUSE");  	
	return 0;
}
