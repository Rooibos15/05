#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 40;
	int n;
	int trial = 0; 
	
	do
	{
		printf("답을 적어주세요 : \n");
		scanf("%d", &n);
		
		if(n < answer)
		  printf("정답보다 작습니다.\n");
		  
		else if(n > answer)
		  printf("정답보다 큽니다.\n");
	
		trial++;
	}
	while(n != answer);
	
	printf("정답입니다! 당신의 시도 횟수는 %d번 입니다.\n", trial);
	       
	system("PAUSE");  	
	return 0;
}
