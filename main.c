#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum = 0;
	int n;
	int i;
	
	printf("���� �Է��ϼ���: ");
	scanf("%d", &n); 
	
	for (i=0; i<=n; i++)
	  sum = sum + i;
	  
	printf("���� %d�Դϴ�.", sum);
	       
	system("PAUSE");  	
	return 0;
}
