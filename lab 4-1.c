#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Multiply(int a, int b) {
	return a * b;
}

int main() {
	int width, height, depth;

	printf("������ü�� ����, ����, ���̸� �Է��ϼ���/\n");
	scanf("%d%d%d", &width, &height, &depth);

	int volume = Multiply(Multiply(width, height), depth);

	printf("����: %d", volume);
}