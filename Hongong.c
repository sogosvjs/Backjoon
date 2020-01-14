#include <stdio.h>

int main()
{
	int arr[10000];		//배열 초기화시에 int arr[]; (x)  ->  int arr[10000]; (o) 
						//요소를 안쓰는경우는 int arr[]={1,2,3}; 초기값 개수만큼 요소 개수 정함
	int i, N, X;

	scanf("%d %d", &N, &X);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < N; i++)
	{
		if (arr[i] < X)	printf("%d ", arr[i]);
	}
}
