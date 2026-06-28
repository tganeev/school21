#include <stdio.h>
#include <stdlib.h>


void drawing(int **field, int col, int row, int y, int x, char sign) {
   
   for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == y && j == x) {
                if (sign == '+') {
                    printf("%3d", field[i][j]);
                } else {
                    printf("%3c", field[i][j]);
                }
                
            } else {
                printf("%3d", field[i][j]);
            }
        }
        printf("\n");
    }

}

int main() {

    int col = 15, row = 5, x = 0, y = 0, val;
    char pointer = '*';
    int **field = malloc(row * sizeof(int*));

    for (int i = 0; i < row; i++) {
        field[i] = malloc(col * sizeof(int)); 
        for (int j = 0; j < col; j++) {
            
            if (i == y && j == x) {
                field[i][j] = val;
            } else {
                field[i][j] = 0;
            }
            
        }
    }
    

    //drawing(field, col, row, y, x, ch);
    //printf("val: %d x: %d y: %d arr: %d\n", val, x, y, field[y][x]);
    system("clear");
    printf("Нажмите клавишу A для начала\n");
    char ch;
    char sign = 't';

    //drawing(field, col, row, y, x, sign);

    
    
    while(1) {
       
        ch = getchar();
        //sign = 't';
        
        if (ch == 'd') {
            sign = 't';
            field[y][x] = val;
            x++;
            val = field[y][x];
            field[y][x] = pointer;

        }

        if (ch == 's') {
            sign = 't';
            field[y][x] = val;
            y++;
            val = field[y][x];
            field[y][x] = pointer;
        }

        if (ch == 'w') {
            sign = 't';
            field[y][x] = val;
            y--;
            val = field[y][x];
            field[y][x] = pointer;
        }

        if (ch == 'a') {
            sign = 't';
            field[y][x] = val;
            x--;
            val = field[y][x];
            field[y][x] = pointer;
        }
        if (ch == 'q') {
            break;
        }
        if (ch == '+') {
           sign = '+';
           val++; 
           field[y][x] = val;
        }
        if (ch == '-') {
            sign = '+';
           val--; 
           field[y][x] = val;
        }

        system("clear");
        
        printf("sign: %c val: %d x: %d y: %d arr: %d  \n", sign, val, x, y, field[y][x]);
        drawing(field, col, row, y, x, sign);
                
    }
    



    return 0;
}