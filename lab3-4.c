#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	char upper, lower;
	char beep = 7;
	char beep2 = '\a';

	printf("알파벳 대문자를 입력하세요.\n");
	scanf("%c", &upper);

	lower = 'a' + (upper - 'A');
	printf("소문자: %c", lower);

	printf("%c", beep);
	printf("%c", beep2);
}