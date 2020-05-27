#include <stdio.h>


int main() {

	int num;
	int num1,num_1, num10,num_10;
	int cnt=1, snum = 0;

	scanf("%d", &num);

	num10 = num / 10;   //2
	num1 = num % 10;    //6

	num_10 = num10;
	num_1 = num1;

	while (1)	//조건문을 따로 쓰는 것이 효율적인가..? 
	{
		snum = num10 + num1;    //8=2+6	//14=6+8
		
		if (snum >= 10)     //8>10 => 0
			snum %= 10;
		
		if ((snum == num_1) && (num1==num_10)) break;    //8!=26

		num10 = num1; //6
		num1 = snum;  //8

		cnt++;
	}

	printf("%d", cnt);
}

/*
#include <stdio.h>

int main(void) {
	int num, a, b, last = -1, n = 0; //last 값을 원래 0으로 뒀는데, -1로 고쳤다.
	scanf("%d", &num);
	a = num / 10;
	b = num % 10;
	while (num != last) {
		int sum = a + b;
		last = b * 10 + sum % 10;
		//printf("%d+%d=%d->%d\n",a,b,sum,last);
		n++;
		a = last / 10;
		b = last % 10;
	}
	printf("%d", n);
}

#include <iostream>

int main(void)
{
	int num, num2;
	int first, end;
	int count = 1;

	std::cin >> num;

	first = num / 10;
	end = num % 10;

	num2 = end * 10 + (first + end) % 10;

	while (num != num2)
	{
		first = num2 / 10;
		end = num2 % 10;

		num2 = end * 10 + (first + end) % 10;
		count++;
	}

	std::cout << count << "\n";
}
*/
