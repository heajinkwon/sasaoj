#include <stdio.h>

//�ֹε�Ϲ�ȣ�� ������ ���� �����ȴ�.
//XXXXXX-XXXXXXX
//���� 6�ڸ��� �������(yymmdd)�̰� �� 7�ڸ��� ����, ����, ���������ڵ��̴�.
//�ֹε�Ϲ�ȣ�� �Է¹޾� ���¸� �ٲ� ����غ���.
//�Է� �� 980907-1121112
//��� �� 9809071121112 
int main(void)
{
	char jumin_number[14],i;
	
	scanf("%s",&jumin_number);
	
	for(i=0;i<14;i++)
	{
	if(i==6) continue;
	printf("%c",jumin_number[i]);	
		
	}
	
	
	
	
	return 0;
}
