#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input;
	
	printf("���� �ϳ��� �Է��ϼ���: ");
	scanf("%d", &input);
	
	if(input>0)
	  printf("������ %d �Դϴ�.\n", input);
	  
    else if(input<0)
	  printf("������ %d�Դϴ�.\n", -input);
	  
	else
	  printf("������  0�Դϴ�.\n", input);
	  	
	system("PAUSE");  	
	return 0;
}
