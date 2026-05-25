#include <stdio.h>
#include <math.h>

#define pi M_PI


int main() {
     double r;

     double v, m, p = 21500;
     if(scanf("%lf", &r) != 1) {
        printf("n/a");
     }


     v = ((4.0 / 3.0) * pi) * pow(r, 3);
     m = p * v;



     printf("%.0lf\n", round(m));
     printf("%.15lf", pi);


    
     return 0;


}