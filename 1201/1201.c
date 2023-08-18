#include <stdio.h>

int main() {
    int a;

    scanf_s("%d", &a);
    (a < 0) ? printf("음수") : (a > 0) ? printf("양수") : printf("%d", a);

    return 0;
}