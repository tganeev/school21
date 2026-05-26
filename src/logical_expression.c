#include <stdio.h>

int main() {
    int x, y, z;
    if (scanf("%d %d %d", &x, &y, &z) != 3) {
        printf("n/a");
        return 0;
    }

    int result = (x && z || x && y) == 1 ? 1 : 0;
    
    printf("%d\n", result);


}