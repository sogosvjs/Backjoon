#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int nBall = 0;
	int nBasket = 0;

	scanf("%d %d", &nBall, &nBasket);

	/*
	///////////////////
	
	Basket 3��
	  *
	  *  *
	  *  *  *
	  basket 3���� �� ���� �ּ� ����  = 6�� (3 + 2 + 1) 
	  Max basket(3) - Min basket(1) = 2

	  
	  *
	  *  
	  *  *  
	  *  *  *  
	  ���� ���� 7��
	  Max basket(4) - Min basket(1) = 3

	  *
	  *  *
	  *  *
	  *  *  *
	  ���� ���� 8��
	  Max basket(4) - Min basket(1) = 3

	  *
	  *  *
	  *  *  *
	  *  *  *
	  ���� ���� 9��
	  Max basket(4) - Min basket(2) = 2		
	  
	  basket n���� ���� ����
	  ...
	  ...


	  -> Basket ������ ��� �� �� Basket -1 ��
	  -> Basket ������ ����� �ƴ� �� Basket�� ����

	///////////////////
	*/

	// ���� �ּ� ������ basket�� ������ 1���� ��� ���� �ͺ��� ���ų� Ŀ���� 
	if (((nBasket * (nBasket + 1)) / 2) > nBall)	// 1 ~ n ������ �� = (n * (n + 1)) / 2
		printf("%d\n", -1);
	else if (nBall % nBasket == 0)
		printf("%d\n", nBasket - 1);
	else
		printf("%d\n", nBasket);

	return 0;
}