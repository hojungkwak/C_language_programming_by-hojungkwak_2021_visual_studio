#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_words(void);                                             // print_word �Լ� ����.


int main(void)                                                      // main�Լ� ����.
{
	
	char x;                                                         // ������ ���� x ����.
	int y;                                                          // ������ ���� y ����.

    R:                                                              // goto�� ���� �� ���� �Ǵ� ��ġ.
	printf("\n");                                                   // �� �� �ٱ�.

	printf(">> �Է� ���� : S 5 (���ĺ� [����] ���� �Է�)");         // �ش� �޽��� ���.
	printf("\n>> ���ڿ� Ƚ��(����)�� �Է� : ");                     // �ش� �޽��� ���.
	scanf(" %c %d", &x, &y);                                        // ���ĺ� �ϳ��� ���� �ϳ��� Ű����� �Է�.
	print_words(x, y);                                              // print_words �Լ� ȣ��. �μ� x, y ���.

	char answer;                                                    // if/else���� ���� ����� ���� ���� answer ����.
	printf("\n>> ���α׷� �ٽ� ����?(Y/N) : ");                      // �ش� �޽��� ���.
	scanf(" %c", &answer);                                          // Y �Ǵ� N �߿� �ϳ��� Ű����� �Է�.

	if (answer == 'Y' || answer == 'y')                             // ���� Y(y)�� �Է��ϸ�
		goto R;                                                     // goto�� �������� R��ġ�� ����.
	else                                                            // Y�� �ƴϰ� N(n)�� �Է��ϸ�
		printf(">> ���α׷��� �����մϴ�.");                        // �ش� �޽����� ����ϰ� ���α׷��� ���ᰡ �ȴ�.

}


void print_words(char x, int y)                                     // print_words �Լ� ����. main�Լ����� ȣ���ϸ� ����� ���Եȴ�.
                                                                    // �Ű����� x�� y�� �����.
{                  
	int n;                                                          // for�ݺ����� ���� ���� ���� n ����.
	printf(">> ");                                                  // �ش��ȣ ���.
	for (n = 0; n < y; n++)                                         // ������ ���� x ���ĺ��� y�� ����ϱ� ���ؼ� ���Ǵ� for�ݺ���.
		printf("%c ",x);                                            // x�� y�� ����ϰ� �ȴ�.
	printf(" .....  [ %dȸ ��� �Ϸ� ]", y);                    // ��� �� ���ĺ� ���� �ش� �޽����� ����ϰ� �ȴ�.
	printf("\n");                                                   // �� �� �ڴ�.
}