#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, height;                           // ������ �������ش�.

	while (1)                                   // ��ȣ�ȿ� 1�� ������ �ݺ��ϴ� ���ѷ����� ����ٴ� ���� �ǹ��Ѵ�.
	{
		printf("������ ����(����: -1): ");      // ȭ�鿡 ��ȣ���� �޽����� ����Ѵ�.
		scanf("%d", &height);                   // ����ڴ� ���� height�� ���� ������ �Է��Ѵ�.

		if (height == -1 )                      // if ���� Ȱ���� height�� -1�� ��쿡
			break;                              // �ݺ� ������ �������� �� �ְ� �Ѵ�.

		if (height <= 0 || height >= 51)        // ���� ����ڷκ��� 1���� 50������ ���ڸ� �Է¹ޱ�� �Ͽ����Ƿ� ���� �̿��� height���� �Է¹��� ��쿡��
			break;                              // �ݺ� ������ �������� �� �ְ� �Ѵ�.

		for (j = 0; j < height; j++)            // for�ݺ����� ����� *�� height�� ��ŭ ��µ� �� �ֵ��� �Ѵ�. ���ǽ��� height�� �ݺ��ȴ�.
			printf("*");

		printf("\n");
	}

	return 0;
}