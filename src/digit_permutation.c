#include <stdio.h>


int main() {

    int n, flag = 0;

    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 0;
    }

    if (n < 0) {
        n *= -1;
        flag = 1;
    }

    int first = n / 100;
    int second = (n - first * 100) / 10;
    int third = n - (first * 100 + second * 10);
    if (flag == 1) {
        third *= -1;
    }

    printf("%d %d %d\n", third, second, first);

}