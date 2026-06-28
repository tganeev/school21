#include <stdio.h>

void int_to_char(char *arr, int n) {
    for (int i = 0; i < 10; i++) {
        arr[i] = i + n;
        //printf("%c\n", arr[i]);
    }
}


void print(char ch) {
   // for (int i = 0; i <= 9; i++) {
        //ch += 3;
         
        write(1, &ch, 1);
        //write(1, "\n", 1);
   // }
}


int main(int argc, char **argv) {

    /*
    int sum;
   
   
   */
    char *arr;
    int i = *argv[1] - '0';
    int p = i * 5;
    int_to_char(*arr, p);
    char ch = i ;
    printf("i: %d\n", i);

    char text[] = "test";

    for (int i = 0; i < 5; i++) {
        
        ch = i + '0';
        print(ch);
        print(argv[1][i]);
        
   }

   write(1, "\n", 1);

    
    //print(var);

   //printf("N: %c\n", *argv[1]);
   //int_to_char(arr, n);

   
   //print(ch);


    return 0;
}