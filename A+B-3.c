//�̷��� ������..?
#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t); //t�� �Է�
	int a, b;
	for (int i = 0; i < t; i++) { //tȸ �ݺ�
		scanf("%d %d", &a, &b); //a���� b�� �Է�
		printf("%d\n", a + b); //a + b�� ���
	}
	return 0;
}


//��Ÿ�� ����
#include<stdio.h>

int main() {
	int T;
	int A, B;	
	int num[50];
	int i;

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);	//a,b�� ������ �������� �Է°��� ��� �������
		num[i] = A + B;
	}

	for (i = 0; i < T; i++)
	{
		printf("%d\n", num[i]);
	}

}

//�Էº��� a,b �� �迭�� ���� �ʾҴ�.
#include<stdio.h>

int main() {
	int T;
	int a[10], b[10];
	int i;

	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &a[i],&b[i]);
	}

	for (i = 0; i < T; i++)
	{
		printf("%d\n", a[i]+b[i]);
	}

}

