#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, i = 2, size = 1, x = 0;
    int *arr = malloc(size * sizeof(int));

    scanf("%d", &num);

    if (num == 1) {
        printf("1\n");
        return 0;
    }

    while(num >= 1) {
        if (num % i == 0) {
            num = num / i;
            arr[x] = i;
            size++;
            x++;
            arr = realloc(arr, size * sizeof(int));

        } else {
            i++;
        }
    }

    for (int i = 0; i < size - 2; i++) {
        printf("%d", arr[i]);
        if (i < size - 3) printf("*");
    }
    
    printf("\n");

    free(arr);


    return 0;
}