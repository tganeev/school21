#include <stdio.h>
#include <stdlib.h>



int main() {
    int n, i = 0;
    char ch;
    int size = 1;
    int *arr = malloc(size * sizeof(int));
    while(1) {
        scanf("%d", &n);
        if (n == -1) {
            break;
        }

        arr[i] = n;
        i++;
        size++;
        arr = realloc(arr, size * sizeof(int));
    }

    for (int i = size - 2; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    free(arr);
}