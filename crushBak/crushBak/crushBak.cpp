#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int nBall = 0;
	int nBasket = 0;

	scanf("%d %d", &nBall, &nBasket);

	/*
	///////////////////
	
     - Basket 3개
	  *						
	  *  *
	  *  *  *
	  basket 3개일 때 공의 최소 개수  = 6개 (3 + 2 + 1) 
	  Max basket(3) - Min basket(1) = 2

	  
	  *
	  *  
	  *  *  
	  *  *  *  
	  공의 개수 7개
	  Max basket(4) - Min basket(1) = 3

	  *
	  *  *
	  *  *
	  *  *  *
	  공의 개수 8개
	  Max basket(4) - Min basket(1) = 3

	  *
	  *  *
	  *  *  *
	  *  *  *
	  공의 개수 9개
	  Max basket(4) - Min basket(2) = 2		
	  
	  
	  
     - Basket n개일 때도 동일
	  ...
	  ...


	  -> Basket 개수의 배수 일 때     Max basket - Min basket = Basket -1 개
	  -> Basket 개수의 배수가 아닐 때 Max basket - Min basket = Basket의 개수

	///////////////////
	*/

	// 공의 최소 개수가 basket의 개수를 1부터 모두 더한 것보다 같거나 커야함 
	if (((nBasket * (nBasket + 1)) / 2) > nBall)	// 1 ~ n 까지의 합 = (n * (n + 1)) / 2
		printf("%d\n", -1);
	else if (nBall % nBasket == 0)
		printf("%d\n", nBasket - 1);
	else
		printf("%d\n", nBasket);

	return 0;
}
