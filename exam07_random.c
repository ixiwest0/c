#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#define SIZE 6

int main()
{
	int freq[SIZE] = { 0 };
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < 10000; i++)
		++freq[rand() % 6];
	printf("====================\n");
	printf(" ����   ��\n");
	printf("====================\n");

	for (i = 0; i < SIZE; i++)
		printf("%3d     %3d\n", i, freq[i]);
}