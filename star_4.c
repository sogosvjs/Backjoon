/*�����_2441��

*****
 ****
  ***
   **
    **/

//3�� for�� //�� Ǯ��
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

/* 2�� for��
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