#include <stdio.h>

int main() {

    int n, x = 0, y = 0;
    int count = 1;
    char c;
    int flag = 0;
    
    if((scanf("%d%c", &n, &c) != 2) || c == '.') {
        printf("n/a\n");
        return 0;
    }

    int p = n;
    
    
    int matrix[p][p];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 1;
        }
        printf("\n");
    }
      
    while(count <= n * n) {
        
        if (flag == 0) {
            matrix[y][x] = count++;
            
            if (x == p - 2) {
                flag = 1;
            }
            x++;
        } 
       if (flag == 1) {
            matrix[y][x] = count++;
            
            if (y == p - 2) {
                flag = 2;
            } 
            y++;
            
        }
        if (flag == 2) {
            matrix[y][x] = count++;
            
            if (x == n - (p - 1)) {
                flag = 3;
            }
            x--;
        }

        if (flag == 3) {
            matrix[y][x] = count++;
            y--;
            if (y == n - (p - 1)) {
                flag = 0;
                p--;
            } 
            
        }
    } 
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    

    return 0;
}