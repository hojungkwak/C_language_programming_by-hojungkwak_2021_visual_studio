#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int start, x, y;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &start);

	for(y = 1; y <= start; y++)
	{
		for (x = 1; x <= y; x++)
			printf("%d", x);
		printf("\n");
	}
}