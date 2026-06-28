#include <stdio.h>


int main() {
    int n, i = 0;
    int size = 1;
    //int *arr = malloc(size * sizeof(int));
    int max;
    while(1) {
        if(scanf("%d", &n) != 1) {
            break;
        }
        if (n == -1) {
            break;
        }

        if (i == 0) {
            max = n;
        }

        if (max < n) {
            max = n;
        }
        //arr[i] = n;
        
        //size++;
        i++;
        //arr = realloc(arr, size * sizeof(int));
    }

    printf("%d\n", max);

    



}