#include <stdio.h>
#include <math.h>

int main(void) {
    int dst;

    printf("2 이상의 정수를 입력하세요 : \n");
    scanf("%d", &dst);

    int cnt = 0; // 줄바꿈 위해 출력 횟수 기록
    int i, j;
    for (i = 2; i <= dst; i++) {
        int is_prime_number = 1;

        for (j = 2; j <= sqrt(i) + 1; j++) {
            if (i % j == 0) {
                if (i != 2) {
                    is_prime_number = 0;
                    break;
                }
            }
        }

        if (is_prime_number) {
            cnt += 1;
            printf("%d", i);

            if (cnt % 5 == 0) {
                printf("\n");
            }
            else {
                printf(" ");
            }
        }
    }

    return 0;
}
