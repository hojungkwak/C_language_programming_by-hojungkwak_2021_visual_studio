#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char season;                                                                              // 문자형 변수 season을 선언합니다.                       


	printf("계절을 선택할 알파벳 입력 : ");                                                  // 계절을 선택할 알파벳을 입력하라는 메시지를 출력합니다.
	scanf("%c", &season);                                                                    // 사용자는 키보드로 알파벳을 입력합니다.
	


	switch (season)                                                                          // 계절별 해당 메시지를 출력하기 위해 switch문을 사용합니다.
	{
	case 'A': case 'a':                                                                      // A또는a의 경우 아래의 메시지를 출력합니다.
			printf("계절: 봄\n");
			printf("수행: 꽃을 가꾼다");
			break;

	case 'S': case 's':                                                                      // S또는s의 경우 아래의 메시지를 출력합니다.
			printf("계절: 여름\n");
			printf("수행: 수영을 한다");
			break;

	case 'D': case 'd':                                                                      // D또는d의 경우 아래의 메시지를 출력합니다.
			printf("계절: 가을\n");
			printf("수행: 추수를 한다");
			break;

	case 'F': case 'f':                                                                      // F또는f의 경우 아래의 메시지를 출력합니다.
			printf("계절: 겨울\n");
			printf("수행: 스키를 탄다");
			break;

	default:                                                                                 // 그 외의 경우 아래의 메시지를 출력합니다.
			printf("허용되지 않는 알파벳입니다.\n");
			printf("알파벳 대소 문자 구별 없이 A, S, D, F만 허용합니다.\n");
			printf("프로그램을 다시 시작하세요.");

	}

	return 0;
}
