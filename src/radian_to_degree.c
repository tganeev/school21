#include <stdio.h>
#include <math.h>

int main() {

    double degree, radian, coeff = 57.29 ;
    if (scanf("%lf", &radian) !=  1) {
        printf("n/a");
    }

    degree = round(radian * coeff);

    printf("%.0lf\n", degree);

    return 0;

}