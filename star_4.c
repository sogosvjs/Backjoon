#include <stdio.h>

int main()
{
	int N;

	scanf("%d", &N);

	for (int i=0; i < N; i++)		//�ٹٲ�
	{
		for (int j=i; j <N ; j++)	//'*'
		{
			for (int k=0; k<i ; k++)	//����
			{
				if(j==i)	//ó������ ����ǵ��� ���ǹ� �ۼ�����
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
}