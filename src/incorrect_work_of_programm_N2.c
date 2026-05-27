#include <stdio.h>

/*
#include <stdio.h>

int main(void)
{
    int x = -21;

    scanf("%d", x);
    printf("%03d", x);

    return 0;
}

*/

int main() {
    int x = -21;
    scanf("%d", &x);
    printf("%05d", x);

    return 0;
}