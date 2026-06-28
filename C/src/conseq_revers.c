#include <stdio.h>
#include <stdlib.h>



int main() {
    int n, i = 0;
    int size = 1;
    int *arr = malloc(size * sizeof(int));
    int flag = 0;
    int val = 0;
    while(1) {
        if ((val = scanf("%d", &n)) != 1) {
            flag = 1;
            break;
        }
        if (n == -1) {
            break;
        }

        arr[i] = n;
        i++;
        size++;
        arr = realloc(arr, size * sizeof(int));
    }

    if (flag > 0) {
        printf("n/a");
        free(arr);
        return 0;
    }

    for (int i = size - 2; i >= 0; i--) {
        printf("%d ", arr[i]);
    }


    free(arr);
    return 0;
}