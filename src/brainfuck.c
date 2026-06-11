#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 5;
    int y = 5;
    int field[y][x];
    int cursor = 1;
    

    memset(field, 0, sizeof(field));
    /*
    
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            field[i][j] = 0;
        }
        printf("\n");
    }
    */


    field[0][0] = 1;

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            printf("%d ", field[i][j]);
        }
        printf("\n");
    }

    char ch;

    while((ch = getchar()) != 'q') {
        if (ch == 'd') {
            int m = 0, n = 0;
            field[m][cursor++] = 1;
            for (int i = 0; i < y; i++) {
                for (int j = 0; j < x; j++) {
                    printf("%d ", field[i][j]);
            }
            printf("\n");
            }

        }
    }



    return 0;
}