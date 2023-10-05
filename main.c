#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum = 0;
	int n;
	int i;
	
	printf("수를 입력하세요: ");
	scanf("%d", &n); 
	
	for (i=0; i<=n; i++)
	  sum = sum + i;
	  
	printf("값은 %d입니다.", sum);
	       
	system("PAUSE");  	
	return 0;
}
