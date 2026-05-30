#include <stdio.h>

int main() {
    int size = 1;
    int last = 0;
    int first = 0;
    char *string = malloc(size * sizeof(char));
    char c;
    for(int i = 0; i < size; i++) {
        
        scanf("%c", &string[i]);
        if (string[i] == '\n') break;
        //printf("%c\n", string[i]);
        if (string[i] == ' ') {
            if (first == 0) {
                first = 1;
            }
            last = i;
        } 

        size++;
        string = realloc(string, size * sizeof(char));
        
    }

        for (int i = last + 1; i < size - 1; i++) {
                printf("%c", string[i]);
        }

        for (int i = first + 1; i <= last; i++) {
                printf("%c", string[i]);
        }

        for (int i = 0; i <= first; i++) {
                printf("%c", string[i]);
        }

        free(string);

        printf("\n");



    return 0;

}