#include <stdio.h>

int main() {

    int n;
    int out;
    int max = 1;
    int num;
    int count = 0;
    int power = 1;
    int proizv;
    
    
        if(scanf("%d", &n) != 1) {
            printf("n/a");
        }

        if (n < 0) {
            n = n * -1;
        }

        num = n;

    while(1) {

        while(n > 10) {
            n = n / 10;
            count++;
            //printf("%d\n", count);

        }

        if (n % 2 > 0) {
            max *= n;
            //printf("MAX: %d\n", max);
        }


        //printf("%d %d %d\n", count, num, n);


        if (count > 0) {
            for (int i = 0; i < count; i++) {
                power *= 10;
            }
            proizv = power * n;
            
            num = num - proizv;
            n = num;
            //printf("NUM and N: %d %d\n", n, num);
            count = 0;
            power = 1;
        } else {
            break;
        }

        
        
    }

        if (max > 1) {
            printf("%d\n", max);
        } else {
            printf("0\n");
        }
        



       
}