#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i1, i2;
	double f;
	printf("������ �Է����ּ���.\n");
	scanf("%d", &i1);

	f = i1;
	i2 = f;

	printf("����: %d", i1 - i2);
}