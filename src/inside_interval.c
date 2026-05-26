#include <stdio.h>

int main() {
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("n/a");

        return 0;
    }

    int result = c > a && c < b? 1 : 0;

    printf("%d\n", result);
    return 0;
}