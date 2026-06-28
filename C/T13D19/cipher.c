#include <stdio.h>


int main() {

    int point;
    printf("Выберите пункт меню: \n");
    printf("Указать путь к файлу(1): \n");
    printf("Выход(-1): \n");
    scanf("%d", &point);

    if (point == 1) {
        while(getchar() != '\n');

        char *filename = malloc(20 * sizeof(char));
        char c;
        printf("введите имя файла: ");
        for (int i = 0; c != '\n'; i++) {
            c = getchar();
            if (c == '\n') {
                break;
            }
            filename[i] = c;
        }
        
        FILE *file = fopen(filename, "r");

        
        char ch;
        
        while((ch = fgetc(file)) != EOF) {
            printf("%c", ch);
        }  

       
    printf("\n");

    }

    if (point == -1) {

        printf("выбран выход\n");
        return 0;
    }



    
    

     /*
    while (fgets(buffer, sizeof(buffer ), file) != NULL) {
            printf("%s", buffer);
    };

    
   
    
    printf("Введите текст для зашифровки: ");
    char *text = malloc(1 * sizeof(char));
    //char *abc = malloc(26 * sizeof(char));
    char abc[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int size = 1;
    
    int i = 0;        
    while(1) {
        char ch = getchar();
        text[i] = ch;
        
        
        if (ch == '\n') {
            text[i] = '\0';
            break;
        }

        i++;
        size++;
        text = realloc(text, size * sizeof(char));
    }

    printf("Введите смещение: ");
    int shift;
    scanf("%d", &shift);

    printf("Шифр: ");
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (text[i] == abc[j]) {
                printf("%c", abc[j + shift]);
            }
        }
        
    }
    printf("\n");
    */
    

    return 0;
}