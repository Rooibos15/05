#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int n = 0;
	
	printf("���ڸ� �Է��ϼ���: ");
	
	while((c=getchar() ) !='\n')
	
	    if(c>='0' && c <='9')
	       n++;
	       printf("������ ������ %d�� �Դϴ�.", n);
	system("PAUSE");  	
	return 0;
}
