#include <stdio.h>
#include <stdlib.h>


int main() {
    int size = 1;
    int n, i = 0;
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

    for (int i = 0, j = size - 2; i < j; i++, j--) {
        printf("%d %d ", arr[i], arr[j]);
    }

    //for (int i = 0; i < size - 1; i++) {
      //  printf("%d", arr[i]);
    //}

    free(arr);

    return 0;
}