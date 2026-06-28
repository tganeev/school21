#include <stdio.h>
#include <stdlib.h>


void bubble_sort(int *arr, int size) {
    
        int count = size;
        while(count > 0) {
            for(int i = 0, j = i + 1; j < size; i++, j++) {
                //printf("%d %d | %d %d \n", arr[i], arr[j], i, j);
                if(arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            count--;
        }
        
        
}


int main() {
    printf("Введите размер массива: \n");
    int n;
    
    if(scanf("%d", &n) != 1) {
        printf("n/a");
        return 0;
    }

    printf("Введите числа массива: \n");
    int *arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
        bubble_sort(arr, n);
       
    
  
    printf("Отсортированный по взрастанию массив:\n");
   
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

}