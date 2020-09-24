#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>	// _msize ��ǥ�� �Լ��̹Ƿ� �����Ϸ����� ȣȯ�� �� �� ���� ����

typedef struct
{
	int weight;
	int height;
} Bulk;

void compareRanking(Bulk*, int*);

int main()
{
	int nInput;
	
	scanf("%d", &nInput);

	Bulk* People = NULL;
	People = (Bulk*)malloc(nInput * sizeof(Bulk));

	for (int i = 0; i < nInput; i++)
		scanf("%d %d", &People[i].weight, &People[i].height);
	
	compareRanking(People, &nInput);

	free(People);

	return 0;

}

void compareRanking(Bulk* People, int* n)
{
	//int n = _msize(People) / sizeof(bulk);	// �����Ҵ�� �޸��� ũ�⸦ ���Ϸ��� malloc.h ��� ���Ͽ��� �����ϴ� _msize �Լ��� ��� 
	//										// _msize �Լ��� ������ ������ ����Ű�� �޸��� ũ�⸦ �˷��ִ� �Լ�
	int nCount;

	for (int i = 0; i < *n; i++)
	{
		nCount = 1;
		for (int j = 0; j < *n; j++)
		{
			if (i != j)
			{
				if (People[i].height < People[j].height && People[i].weight < People[j].weight)
					nCount++;
			}
		}
		printf("%d ", nCount);
	}
}