/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!

    int year, mnt;
    scanf("%d %d", &year, &mnt);

    if (mnt >= 1 && mnt <= 12) {

        if (mnt == 4 || mnt == 6 || mnt == 9 || mnt == 11) {
            printf("30");
        }
        else if (mnt == 2) {
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
                printf("29");
            else printf("28");
        }
        else printf("31");
        
    }

    return 0;
}