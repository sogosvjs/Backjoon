#include <stdio.h>

int main()
{
	int N;

	scanf("%d", &N);

	for (int i=0; i < N; i++)		//줄바꿈
	{
		for (int j=i; j <N ; j++)	//'*'
		{
			for (int k=0; k<i ; k++)	//공백
			{
				if(j==i)	//처음에만 실행되도록 조건문 작성해줌
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
}