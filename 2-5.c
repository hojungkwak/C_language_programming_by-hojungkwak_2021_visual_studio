#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, height;                           // 변수를 선언해준다.

	while (1)                                   // 괄호안에 1은 무한히 반복하는 무한루프를 만든다는 것을 의미한다.
	{
		printf("막대의 높이(종료: -1): ");      // 화면에 괄호안의 메시지를 출력한다.
		scanf("%d", &height);                   // 사용자는 변수 height의 값을 정수로 입력한다.

		if (height == -1 )                      // if 문을 활용해 height가 -1일 경우에
			break;                              // 반복 루프를 빠져나올 수 있게 한다.

		if (height <= 0 || height >= 51)        // 또한 사용자로부터 1부터 50사이의 숫자를 입력받기로 하였으므로 범위 이외의 height값을 입력받을 경우에도
			break;                              // 반복 루프를 빠져나올 수 있게 한다.

		for (j = 0; j < height; j++)            // for반복문을 사용해 *가 height수 만큼 출력될 수 있도록 한다. 조건식은 height번 반복된다.
			printf("*");

		printf("\n");
	}

	return 0;
}