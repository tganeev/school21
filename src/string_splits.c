#include <stdio.h>
#include <stdlib.h>

/*
1. Выяснилось, что когда память для первой строки выделялась перед началом цикла while в нее записывались какие-то непонятные симвиолы перед первым словом.
Непонятно, почему DeepSeek и Qwen в результате анализа кода написали, чтоб проблема в том, что я вывожу строки до ' ';
2. Я сменил способ вывода информации на экран с посимволного на построковый.

*/

int string_splits(char ***string, int size) {
    
    int i = 0, j = 0, count = 0, space = 0;
    
    int ch;
    
    while((ch = getchar()) != '\n') {
        
        //printf("%c", string[j][i]);
        if (i == 0) {
            string[j] = malloc(size * sizeof(char));
        }

        string[j][i] = ch;
        
       
        if (string[j][i] == ' ') {
            //string[j][i] = '\0';
            j++;
            space++;
            size = 1;
            i = 0;
        } else {
            i++;
            size++;
            string[j] = realloc(string[j], size);
        }
    }
    return space + 1;
}


int main() {
    int i = 0, j = 0, size = 1, count = 0;
    char **string = malloc(size * sizeof(char*));
    
    int space = string_splits(&string, size);


   printf("Result:\n");
    for (int i = 0; i < space; i++) {
     
        printf("%s\n", string[i]);
        free(string[i]);
    }

    
    free(string);

    
      
    return 0;
}