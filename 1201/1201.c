#include <stdio.h>

int main() {
    int a;

    scanf_s("%d", &a);
    (a < 0) ? printf("����") : (a > 0) ? printf("���") : printf("%d", a);

    return 0;
}