#include <stdio.h>
#include <stdlib.h>



int main() {
    int n;
    char ch;
    int sum = 0;
    if(scanf("%d%c", &n, &ch) != 2 || ch == '.') {
        printf("n/a\n");
        return 0;
    }

    int *arr1 = malloc(n * sizeof(int*));
    int *arr2 = malloc(n * sizeof(int*));

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < n; i++) {
        sum += arr1[i] * arr2[i];
    }

    printf("%d", sum);

}
