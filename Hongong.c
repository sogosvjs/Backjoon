#include <stdio.h>

int main()
{
	int arr[10000];		//�迭 �ʱ�ȭ�ÿ� int arr[]; (x)  ->  int arr[10000]; (o) 
						//��Ҹ� �Ⱦ��°��� int arr[]={1,2,3}; �ʱⰪ ������ŭ ��� ���� ����
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
