#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	char upper, lower;
	char beep = 7;
	char beep2 = '\a';

	printf("���ĺ� �빮�ڸ� �Է��ϼ���.\n");
	scanf("%c", &upper);

	lower = 'a' + (upper - 'A');
	printf("�ҹ���: %c", lower);

	printf("%c", beep);
	printf("%c", beep2);
}