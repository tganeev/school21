#include <stdio.h>
#include <stdlib.h>


int ft_len(int num) {
    int size = 0;

    while(num > 0) {
        num = num / 10;
        size++;
    }

    return size;
}

char* ft_itoa(int num, int size) {
    int i = 0;
    int digit = num;
    char *string = malloc(size * sizeof(char));


    while(num > 0) {
        num = num / 10;
        digit = digit - num * 10;
        string[i] = digit + '0';
        //printf("String: %c\n digit: %d", string[i], digit);
        digit = num;
        i++;

    }

    return string;
}

int main() {
 
    int num;
    printf("Введите число: ");
    scanf("%d", &num);

    int size = ft_len(num);

    char *line = ft_itoa(num, size);

     printf("Полученный результат: \n");
    
    for (int i = size; i >= 0; i--) {
        printf("%c", line[i]);
    }
    
    printf("\n");

    return 0;
}