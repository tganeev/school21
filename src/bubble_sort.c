#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int *arr, int size) {

    printf("Отсортированный во взрастанию массив:\n");
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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
  

   
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

}