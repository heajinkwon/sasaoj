#include <stdio.h>
/*�����а� X �������� ���õ� �̻��� �⼮�� �θ���.
����̴� ���õ� �ٸ� ������ �غ��Ҵ�.
�⼮ ��ȣ�� �� �θ����� ���� �� ������... ���� ���� ��ȣ�� ������?
�⼮ ��ȣ�� n�� �������� �ҷ��� ��, ���� ���� ��ȣ�� ����� ����.
�Է�
��ȣ�� �θ� Ƚ��(n)�� ù �ٿ� �Էµȴ�.
(n, 1 ~ 10000)
�θ� Ƚ�� ��ŭ ���� ��ȣ(k)�� �� ��° �ٿ� ������ ���̿� �ΰ� ������� �Էµȴ�.
(k, 1~23)
���
�⼮�� �θ� ��ȣ �߿� ���� ���� ��ȣ�� 1���� ����Ѵ�.
�Է� ���� 
10
10 4 2 3 6 6 7 9 8 5
��� ����
2
*/

int main(){
	int n,k[10000],i,min=23;
	scanf("%d", &n);
	for(i=0 ; i<n ; i++)
	{
		scanf("%d" , &k[i]);
	}
	
	for(i=0 ; i<n ; i++)
	{
		if(min > k[i]) min = k[i];
	}
	
	printf("%d",min);
}