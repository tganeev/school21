#include <stdio.h>
#include <stdlib.h>

int main() {

    char *filename = malloc(50 * sizeof(char));
    int i = 0, count = 0, repeat = 0;

    while(1) {
        filename[i] = getchar();

        if (filename[i] == '\n') {
            filename[i] = '\0';
            break;
        }
        i++;
    }
    //printf("Filename is: %s\n", filename);

    FILE *file = fopen(filename, "r");

    char ch;

    while((ch = fgetc(file)) != EOF) {
        if (ch == '.' || ch == '!' || ch == '?') {
            
            if (repeat == 0) {
                count++;
                printf("%c\n", ch);
            }

            repeat++;
        } else {
            repeat = 0;
        }

        
    }

    fclose(file);
    free(filename);


    printf("Count of sentences: %d %d\n", count, repeat);



}