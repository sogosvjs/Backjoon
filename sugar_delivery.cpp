//��Ǭ����.  �������� �ߴ�. ���� ��������. while���� �̿��ؼ� if�� �ݺ� ���
/*
#include <stdio.h>

int main()
{
	int N;
	int quot_3, quot_5;
	int rest_3, rest_5;

	scanf("%d", &N);

	if (N % 5 == 0)
	{
		quot_5 = N / 5;
		printf("%d", quot_5);
	}
	else if (N % 3 == 0)
	{
		quot_3 = N / 3;
		printf("%d", quot_3);
	}
	else
	{
		quot_5 = N / 5;
		rest_5 = N % 5;
		quot_3 = rest_5 / 3;
		rest_3 = rest_5 % 3;
		printf("%d", quot_3 + quot_5);
	}
}
*/

#include <stdio.h>
int main()
{
	int input;
	int cnt = 0;

	scanf_s("%d", &input);

	while (input > 0)
	{
		if (input % 5 == 0)
		{
			input -= 5;
			cnt++;
		}
		else if (input % 3 == 0)
		{
			input -= 3;
			cnt++;
		}
		else if (input > 5)
		{
			input -= 5;
			cnt++;
		}
		else
		{
			printf("-1");				//cnt=-1;
			break;						//break;
		}
	}
	if(input==0)						//��ó�� else�� �ۼ� �� ���ǹ� ���ֱ� ����
		printf("%d\n", cnt);
}


