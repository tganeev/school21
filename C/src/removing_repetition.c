#include <stdio.h>
#include <stdlib.h>



int main() {
    int n, i = 0;
    int size = 1;
    int count = 0;
    int flag = 0;
    int h = 2;
    int **arr = malloc(size * sizeof(int*));

    while(1) {
        
        scanf("%d", &n);
        if (n == -1) {
            break;
        }
        
        arr[i] = malloc(h * sizeof(int));
        arr[i][0] = n;
       
       

        size++;
        arr = realloc(arr, size * sizeof(int*));
        i++;
       
    }

    printf("\n");

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[i][0] == arr[j][0]) {
                count++;
                if (count > 1) {
                    arr[j][0] = 0;
                }
            }
        }
        arr[i][1] = count;
        
        count = 0;
    }

    for (int i = 0; i < size - 1; i++) {
        
            if (arr[i][0] != 0) printf("%d ", arr[i][0]);
       
        //printf("\n");
    }

    
    for (int i = 0; i < size - 1; i++) {
        
            
        free(arr[i]);
        //printf("\n");
    }
    free(arr);

}
