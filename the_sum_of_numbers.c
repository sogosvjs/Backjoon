#include <stdio.h>

int main()
{
	char arr[100];	//정수형 배열 선언 시 10자리수 넘어갈 경우 정수형 범위 초과(int형 범위-20억(10자리)~20억(10자리))
	int N;
	int sum = 0;

	scanf("%d", &N);
	scanf("%s", arr);	//숫자도 문자다: 295p //아스키코드: 숫자문자, 알파벳 대문자&소문자, 특수문자, 제어문자

	for (int i = 0; i < N; i++)
	{
		sum += arr[i] - 48;
	}

	printf("%d\n", sum);

}