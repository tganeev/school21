#include <stdio.h>


int main() {
    
    int n, y = 0, x = 0;
    int flag = 0;
    int count = 0;
    char ch;
    printf("Enter size of matrix: ");
    if (scanf("%d%c", &n, &ch) != 2 || ch == '.') {
        printf("n/a\n");
        return 0;
    }
    int p = n;
    int matrix[p][p];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 1;
        }
    }

    printf("\n");

    while(count < n * n) {
        
        if (flag == 0) {
            matrix[y][x] = count++;

            if(y == p - 2 ) {
                flag = 1;
            }
            y++;
        }

        if (flag == 1) {
            matrix[y][x] = count++;

            if(x == p - 2 ) {
                flag = 2;
            }
            x++;
        }

        if (flag == 2) {
            matrix[y][x] = count++;

            if(y == n - (p - 1) ) {
                flag = 3;
            }
            y--;
        }

        if (flag == 3) {
            matrix[y][x] = count++;

            if(x == n - (p - 2)) {
                flag = 0;
                p--;
            }
            x--;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;



}