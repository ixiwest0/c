#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Multiply(int a, int b) {
	return a * b;
}

int main() {
	int width, height, depth;

	printf("직육면체의 가로, 세로, 높이를 입력하세요/\n");
	scanf("%d%d%d", &width, &height, &depth);

	int volume = Multiply(Multiply(width, height), depth);

	printf("부피: %d", volume);
}