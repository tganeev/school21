#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>


void get_files(char *path) {
    
    char **files = malloc(50 * sizeof(char*));

    DIR *dir = opendir(path);
    int count = 0;

    struct dirent *entity;
    int i = 0;

    while((entity = readdir(dir)) != NULL) {

         if (entity->d_name[0] != '.' && entity->d_name[1] != '\0'   || entity->d_name[1] != '.' && entity->d_name[2] != '\0' ) {
            files[i] = malloc(15 * sizeof(char));
        
            for (int j = 0; j < strlen(entity->d_name); j++) {
                
                    
                        files[i][j] = entity->d_name[j];
                    
                //printf("%c", entity->d_name[j]);
            }
     
            i++;
            count++;
        } 

            
           
    }

    for (int i = 0; i < count; i++) {
            printf("%d.%s\n", i, files[i]);
    }

    closedir(dir);
}


void cipher(char *filename) {

    printf("Введите смещение: ");
    int shift = 0;
    scanf("%d", &shift);

     
    FILE *file = fopen(filename, "r+");

    if (file == NULL) {
            printf("file doesn't exist\n");
            return 0;
    }

    char ch;
    long pos;
    
    while((ch = fgetc(file)) != EOF) {
        //printf("%c\n", ch);
        pos = ftell(file) - 1;
        fseek(file, pos, 0);
        fputc(ch + shift, file);
    } 

    fclose(file);
    
    printf("Файл зашифрован\n");

}


void write_file(char *filename) {
    
    char *buffer = malloc(60 * sizeof(char));
    char c;
    int i = 0;

    while(1) {
        c = getchar();
        buffer[i] = c;
        
        if (buffer[i] == '\n') {
            buffer[i] = '\0';
            break;
        }

        i++;
    }
    
    FILE *file = fopen(filename, "a");

    if (file == NULL) {
            printf("file doesn't exist\n");
            return 0;
    }

    fputs(buffer, file);
    fclose(file);
    free(buffer);
    show_file(filename);

}

void show_file(char *filename) {

    FILE *file = fopen(filename, "r");
            if (file == NULL) {
                printf("file doesn't exist\n");
                return 0;
            }

            char ch;
            
            while((ch = fgetc(file)) != EOF) {
                printf("%c", ch);
            } 

            printf("\n");
            
            fclose(file);
            
}

void read_file(char *filename) {
    
    char c;  
            
            //printf("введите имя файла: ");
            for (int i = 0; c != '\n'; i++) {
                scanf("%c", &filename[i]);
                
                if (filename[i] == '\n') {
                    filename[i] = '\0';
                    break;
                }
               
            }

            show_file(filename);
           
}

int main() {
    
    int point;
    char *filename = malloc(200 * sizeof(char)); 
    
    while(1) {

    /*
    printf("Выберите пункт меню: \n");
    printf(" 1. Прочитать данные из файла \n");
    printf(" 2. Записать данные в файл \n");
    printf(" 3. Зашифровать файл \n");
    printf(" 4. Расшифровать файл \n");
    printf("-1. Выход \n");
    */

    scanf("%d", &point);

        while(getchar() != '\n');

        if (point == -1) {
           free(filename); 
           return 0;
        }
        
        if (point == 1) {
           read_file(filename);
        } 

        if (point == 2) {
           write_file(filename);
        }
        
        if (point == 3) {

            
            get_files("./ai_modules/");
            
            //strcpy(filename, "/opt/goinfre/kindlyfr/Projects/school21/C/T13D19/ai_modules/cipher.c");
            //printf("%s\n",filename);
            //cipher(filename);
        } 
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