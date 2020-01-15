/*별찍기_2441번

*****
 ****
  ***
   **
    **/

//3중 for문 //내 풀이
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

/* 2중 for문
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i - 1; ++j) {
			printf(" ");
		}
		for (int j = 1; j <= n - i + 1; ++j) {
			printf("*");
		}
		puts("");
	}
	return 0;
}
*/