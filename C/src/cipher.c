#include <stdio.h>
#include <stdlib.h>


int main() {

    char abc1[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char abc2[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    char *filename = malloc(30 * sizeof(char));

    char c;
    int i = 0;
    int shift = 0;
    int flag = 0;
    
    printf("введите имя файла: \n");

    while((c = getchar()) != '\n') {

        filename[i] = c;
        i++;
    }

    printf("введите смещение: \n");
    scanf("%d", &shift);

    FILE *file = fopen(filename, "r");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        flag = 0;
        for (int i = 0; i < 26; i++) {
            if (ch == abc1[i]) {
                flag = 2;
            }

            if (ch == abc2[i]) {
                flag = 1;
            }
        }

        if (flag == 1) {
            if ((ch + shift) <= 90 && (ch + shift) >= 65 ) {
                printf("%c", ch + shift);
            }

            if ((ch + shift) > 90) {
                printf("%c", (ch + shift) - 26);
            }

            if ((ch + shift) < 65) {
                printf("%c", (ch + shift) + 26);
            }
        }

        
        if (flag == 2) {
            if ((ch + shift) <= 122 && (ch + shift) >= 97 ) {
                printf("%c", ch + shift);
            }
            if ((ch + shift) > 122) {
                printf("%c", (ch + shift) - 26);
            }

            if ((ch + shift) < 97) {
                printf("%c", (ch + shift) + 26);
            }
        }

        if (flag == 0) {
             printf("%c", ch);
        }

    }

    printf("\n");

    free(filename);
    fclose(file);
   

    return 0;
}
