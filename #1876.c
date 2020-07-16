#include <stdio.h>

//주민등록번호는 다음과 같이 구성된다.
//XXXXXX-XXXXXXX
//앞의 6자리는 생년월일(yymmdd)이고 뒤 7자리는 성별, 지역, 오류검출코드이다.
//주민등록번호를 입력받아 형태를 바꿔 출력해보자.
//입력 예 980907-1121112
//출력 예 9809071121112 
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
