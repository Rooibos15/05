#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 40;
	int n;
	int trial = 0; 
	
	do
	{
		printf("���� �����ּ��� : \n");
		scanf("%d", &n);
		
		if(n < answer)
		  printf("���亸�� �۽��ϴ�.\n");
		  
		else if(n > answer)
		  printf("���亸�� Ů�ϴ�.\n");
	
		trial++;
	}
	while(n != answer);
	
	printf("�����Դϴ�! ����� �õ� Ƚ���� %d�� �Դϴ�.\n", trial);
	       
	system("PAUSE");  	
	return 0;
}
