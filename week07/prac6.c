#include <stdio.h>

int main(void) {
    char user_input[100];

    printf("문자열을 입력해주세요: ");
    gets(user_input); // ! warning: this program uses gets(), which is unsafe.
    // 위와 같은 warning이 뜨는 이유: gets 함수는 입력할 배열의 크기를 검사하지 않기 때문에,
    // 해당 배열의 크기보다 긴 문자열을 입력하게 될 경우 배열을 벗어난 메모리 영역을 침범할 수 있음.
    // 이는 scanf 함수나 strcpy 함수도 마찬가지

    puts("입력된 문자열: ");
    puts(user_input);

    printf("puts를 사용할 경우 자동 줄바꿈 된당.\n");

    return 0;
}
