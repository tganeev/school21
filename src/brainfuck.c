#include <stdio.h>
#include <stdlib.h>


void drawing(int d, int s) {
    /*
    for (int i = 0; i < 5; i++) {
        field[i] = malloc(5 * sizeof(int));

        for (int j = 5; j < 5; j++) {
            field[i][j] = 0;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%3d", field[i][j]);
        }
        printf("\n");
    }
    */

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 35; j++) {
            printf("*");
        }
        printf("\n");
    }


}

int main() {

    int x = 5;
    int y = 5;
    int **field = malloc(5 * sizeof(int*));

    int d = 0, s = 0;
    
    
    //char ch = '!';
    //int ch = 1041;

    drawing(d, s);

    while(1) {
        
    }    
        

 
    //printf("%c\n", ch);
    

    //memset(field, 0, sizeof(field));
    /*
    
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            field[i][j] = 0;
        }
        printf("\n");
    }
    


    field[0][0] = 1;

    

    char ch;
    int m = 0, n = 0;

    while((ch = getchar()) != 'q') {
        
        if (ch == 'd') {
            
            field[m][cursor++] = 1;
            field[m][n++] = 0;
            for (int i = 0; i < y; i++) {
                for (int j = 0; j < x; j++) {
                    printf("%d ", field[i][j]);
            }
            printf("\n");
            }

        }
    }

    */



    return 0;
}