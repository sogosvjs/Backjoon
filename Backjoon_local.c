#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>	// _msize 비표준 함수이므로 컴파일러마다 호환이 안 될 수도 있음

typedef struct
{
	int weight;
	int height;
} Bulk;

//void compareRanking(Bulk*, int*);
void compareRanking(Bulk*, int);

int main()
{
	int nInput;
	
	scanf("%d", &nInput);

	Bulk* People = NULL;
	People = (Bulk*)malloc(nInput * sizeof(Bulk));

	for (int i = 0; i < nInput; i++)
		scanf("%d %d", &People[i].weight, &People[i].height);
	
	//compareRanking(People, &nInput);	//굳이 주소값이 아닌 값으로 넘겨줘도 잘 작동 // 포인터를 사용해 주소값을 넘겨주는 것은 원본 값을 변경할 필요가 있을 때!
	compareRanking(People, nInput);
	
	free(People);

	return 0;

}

//void compareRanking(Bulk* People, int n*)
void compareRanking(Bulk* People, int n)
{
	//int n = _msize(People) / sizeof(bulk);	// 동적할당된 메모리의 크기를 구하려면 malloc.h 헤더 파일에서 제공하는 _msize 함수를 사용 
	//										// _msize 함수는 포인터 변수가 가리키는 메모리의 크기를 알려주는 함수
	int nCount;

	for (int i = 0; i < n; i++)
	{
		nCount = 1;
		for (int j = 0; j < n; j++)
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
