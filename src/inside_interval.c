#include <stdio.h>

int main() {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("n/a");
    }

    int result = c > a && c < b? 1 : 0;

    printf("%d\n", result);
}