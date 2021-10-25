#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_words(void);                                             // print_word 함수 원형.


int main(void)                                                      // main함수 정의.
{
	
	char x;                                                         // 문자형 변수 x 선언.
	int y;                                                          // 정수형 변수 y 선언.

    R:                                                              // goto문 실행 시 오게 되는 위치.
	printf("\n");                                                   // 한 줄 뛰기.

	printf(">> 입력 예시 : S 5 (알파벳 [공백] 숫자 입력)");         // 해당 메시지 출력.
	printf("\n>> 문자와 횟수(정수)를 입력 : ");                     // 해당 메시지 출력.
	scanf(" %c %d", &x, &y);                                        // 알파벳 하나와 숫자 하나를 키보드로 입력.
	print_words(x, y);                                              // print_words 함수 호출. 인수 x, y 사용.

	char answer;                                                    // if/else문에 사용될 대답을 위한 변수 answer 선언.
	printf("\n>> 프로그램 다시 실행?(Y/N) : ");                      // 해당 메시지 출력.
	scanf(" %c", &answer);                                          // Y 또는 N 중에 하나를 키보드로 입력.

	if (answer == 'Y' || answer == 'y')                             // 만약 Y(y)를 입력하면
		goto R;                                                     // goto문 실행으로 R위치로 간다.
	else                                                            // Y가 아니고 N(n)을 입력하면
		printf(">> 프로그램을 종료합니다.");                        // 해당 메시지를 출력하고 프로그램이 종료가 된다.

}


void print_words(char x, int y)                                     // print_words 함수 정의. main함수에서 호출하면 여기로 오게된다.
                                                                    // 매개변수 x와 y를 사용함.
{                  
	int n;                                                          // for반복문에 사용될 지역 변수 n 선언.
	printf(">> ");                                                  // 해당기호 출력.
	for (n = 0; n < y; n++)                                         // 문자형 변수 x 알파벳을 y개 출력하기 위해서 사용되는 for반복문.
		printf("%c ",x);                                            // x를 y개 출력하게 된다.
	printf(" .....  [ %d회 출력 완료 ]", y);                    // 출력 후 알파벳 옆에 해당 메시지를 출력하게 된다.
	printf("\n");                                                   // 한 줄 뛴다.
}
