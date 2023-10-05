#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int n = 0;
	
	printf("문자를 입력하세요: ");
	
	while((c=getchar() ) !='\n')
	
	    if(c>='0' && c <='9')
	       n++;
	       printf("숫자의 개수는 %d개 입니다.", n);
	system("PAUSE");  	
	return 0;
}
