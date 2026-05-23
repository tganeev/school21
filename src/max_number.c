#include <stdio.h>

int main() {

    int n;
    int out;
    int max = 0;
    int num;
    int count = 0;
    int power = 1;
    int proizv;
    
    
        if(scanf("%d", &n) != 1) {
            printf("n/a");
        }

        num = n;

    while(1) {

        while(n > 10) {
            n = n / 10;
            count++;
            printf("%d\n", count);

        }

        if (max < n) {
            max = n;
            printf("MAX: %d\n", max);
        }


        printf("%d %d %d\n", count, num, n);


        if (count > 0) {
            for (int i = 0; i < count; i++) {
                power *= 10;
            }
            proizv = power * n;
            
            num = num - proizv;
            n = num;
            printf("NUM and N: %d %d\n", n, num);
            count = 0;
            power = 1;
        } else {
            break;
        }

        
        
    }

        printf("%d\n", max);



       
}