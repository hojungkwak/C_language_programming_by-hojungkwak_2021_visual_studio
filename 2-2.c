#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char season;                                                                              // ������ ���� season�� �����մϴ�.                       


	printf("������ ������ ���ĺ� �Է� : ");                                                  // ������ ������ ���ĺ��� �Է��϶�� �޽����� ����մϴ�.
	scanf("%c", &season);                                                                    // ����ڴ� Ű����� ���ĺ��� �Է��մϴ�.
	


	switch (season)                                                                          // ������ �ش� �޽����� ����ϱ� ���� switch���� ����մϴ�.
	{
	case 'A': case 'a':                                                                      // A�Ǵ�a�� ��� �Ʒ��� �޽����� ����մϴ�.
			printf("����: ��\n");
			printf("����: ���� ���۴�");
			break;

	case 'S': case 's':                                                                      // S�Ǵ�s�� ��� �Ʒ��� �޽����� ����մϴ�.
			printf("����: ����\n");
			printf("����: ������ �Ѵ�");
			break;

	case 'D': case 'd':                                                                      // D�Ǵ�d�� ��� �Ʒ��� �޽����� ����մϴ�.
			printf("����: ����\n");
			printf("����: �߼��� �Ѵ�");
			break;

	case 'F': case 'f':                                                                      // F�Ǵ�f�� ��� �Ʒ��� �޽����� ����մϴ�.
			printf("����: �ܿ�\n");
			printf("����: ��Ű�� ź��");
			break;

	default:                                                                                 // �� ���� ��� �Ʒ��� �޽����� ����մϴ�.
			printf("������ �ʴ� ���ĺ��Դϴ�.\n");
			printf("���ĺ� ��� ���� ���� ���� A, S, D, F�� ����մϴ�.\n");
			printf("���α׷��� �ٽ� �����ϼ���.");

	}

	return 0;
}
