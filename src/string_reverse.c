#include <stdio.h>
#include <stdlib.h>


int main() {
    char c;
    int size = 1, i = 0;
    int last = 0;
    char *string = malloc(size * sizeof(char));

    while(1) {
        scanf("%c", &string[i]);
         
        //if (string[i] == ' ') last = i;
        
        if (string[i] == '\n') {
            break;
        } else {
            size++;
            string = realloc(string, size * sizeof(char));
        }

        i++;

    }

    for (int i = size - 3 ; i >= 0; i--) {
        
        //printf("%c\n", string[i]);
        
        if (string[i] == ' ') {
            
            for (int j = i + 1; string[j] != ' '; j++) {
                printf("%c", string[j]);
            }
            printf(" ");
        }

        if (i == 0) {
            
            for (int j = i; string[j] != ' '; j++) {
                printf("%c", string[j]);
            }
           
        }


                
    }

    printf("\n");






    free(string);
    

    return 0;

}