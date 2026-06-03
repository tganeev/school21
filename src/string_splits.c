#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0, j = 0, size = 1, count = 0, space = 0;
    char **string = malloc(size * sizeof(char*));
    string[j] = malloc(size * sizeof(char));

    while(1) {
        scanf("%c", &string[j][i]);
        if (string[j][i] == '\n') break;
        if (string[j][i] == ' ') {
            j++;
            space++;
            size = 1;
            i = 0;
            string[j] = malloc(size * sizeof(char));
        } else {
            i++;
            size++;
            string[j] = realloc(string[j], size * sizeof(char));
        }
        

    }

    printf("Result:\n");
    for (int i = 0; i < space; i++) {
        for (int j = 0; string[i][j] != ' '; j++) {
            printf("%c", string[i][j]);
        }
        printf("\n");
    }

   

    
      
    return 0;
}