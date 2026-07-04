#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int **a;
    int **f;
    int **s;
} orders;

int main() 
{
    int n, t;
    int pik = 0;
    int max = 0;

    printf("Введите кол-во заявок и горизонт времени через пробел: ");
    scanf("%d %d", &n, &t);

    int p = n;
    int u = n;

    printf("Введенные данные: %d %d\n", n, t);

    orders count;
    count.a = malloc(n * sizeof(int*));
    count.f = malloc(n * sizeof(int*));
    count.s = malloc(n * sizeof(int*));

    int **pivot = malloc(100 * sizeof(int*));

    int i = 0;

    while(n >= 1) {

        count.a[i] = malloc(1 * sizeof(int));
        count.f[i] = malloc(1 * sizeof(int));
        count.s[i] = malloc(1 * sizeof(int));
        printf("Введите начало и конец интервало и кол-во велосипедов в заявке через пробел: ");
        scanf("%d %d %d", &count.a[i][0], &count.f[i][0], &count.s[i][0]);
        n--;
        i++;
    }

    for (int i = 0; i < p; i++) {

        if (max < count.s[i][0]) {
            max = count.s[i][0];
        }
        
        for (int j = i+1; j < p; j++) {
            if ((count.a[j][0] >= count.a[i][0] && count.a[j][0] <= count.f[i][0]) || (count.f[j][0] >= count.a[i][0] && count.f[j][0] <= count.f[i][0])) {
                pik+= count.s[i][0] + count.s[j][0]; 
            }
        }

    }
    int x = 0;
    int end = 0;
    int bicycle = 0;
    int z = t;
    int w = t;
    

    while(z > 0) {
        pivot[x] = malloc(2 * sizeof(int));
        pivot[x][0] = x;
        pivot[x][1] = end;
        pivot[x][2] = bicycle;
        x++;
        z--;
    }

    int k = 0;
    int sum = 0;
       

    for (int i = 0; i < w; i++) {
        if (pivot[i][0] == count.a[k][0]) {
            for (int j = i; j < count.f[k][0]; j++) {
                pivot[j][1] = pivot[j][1] + 1;
                pivot[j][2] += count.s[k][0];
                if (pivot[j][2] > sum) {
                    sum = pivot[j][2];
                }
            }
            k++;
            i = 0;
        }
           
        if (k == u) {
            break;
        }
        
    }

    printf("Пиковая загрузка: %d \n", sum);
    /*
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", pivot[i][j]);
        }
        printf("\n");
    }


    
   
    if (pik > 0 && pik > max) {
        printf("%d\n", pik);
    } else {
        printf("%d\n", max);
    }
    */

    

    return 0;
}
