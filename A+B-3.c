//이렇게 간단히..?
#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t); //t값 입력
	int a, b;
	for (int i = 0; i < t; i++) { //t회 반복
		scanf("%d %d", &a, &b); //a값과 b값 입력
		printf("%d\n", a + b); //a + b값 출력
	}
	return 0;
}


//런타임 에러
#include<stdio.h>

int main() {
	int T;
	int A, B;	
	int num[50];
	int i;

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);	//a,b가 정수형 변수여서 입력값이 계속 덮어씌워짐
		num[i] = A + B;
	}

	for (i = 0; i < T; i++)
	{
		printf("%d\n", num[i]);
	}

}

//입력변수 a,b 를 배열로 두지 않았다.
#include<stdio.h>

int main() {
	int T;
	int a[10], b[10];
	int i;

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &a[i],&b[i]);
	}

	for (i = 0; i < T; i++)
	{
		printf("%d\n", a[i]+b[i]);
	}

}

