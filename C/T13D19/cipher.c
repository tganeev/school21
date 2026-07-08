#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>



void concatenate(char *dir, char *filename, char *files) {
    int end = strlen(dir);

    for (int i = 0; i < end; i++) {
        filename[i] = dir[i];
    }

    for (int i = 0; i < strlen(files); i++) {
        filename[end] = files[i];
        end++;
    }

}

int get_files(char *path, char **files) {
    
    DIR *dir = opendir(path);
    int count = 0;
   
    struct dirent *entity;
    int i = 0;

    while((entity = readdir(dir)) != NULL) {

         if (entity->d_name[0] != '.' && entity->d_name[1] != '\0'   || entity->d_name[1] != '.' && entity->d_name[2] != '\0' ) {
            files[i] = malloc(15 * sizeof(char));
        
            for (int j = 0; j < strlen(entity->d_name); j++) {

                        files[i][j] = entity->d_name[j];
                    
            }
     
            i++;
            count++;
        } 
           
    }

    closedir(dir);
    return count;
}


void cipher(char *filename, int shift) {

    int size = strlen(filename);

    if (filename[size - 1] == 'c') {

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
    
    printf("Файл %s зашифрован\n", filename);

    }

    if (filename[size - 1] == 'h') {

        FILE *file = fopen(filename, "w");

        if (file == NULL) {
                printf("file doesn't exist\n");
                return 0;
        }


    fclose(file);
    
    printf("Файл %s очищен\n", filename);

    }
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
    int count;
    char *filename = malloc(200 * sizeof(char)); 
    char **files = malloc(50 * sizeof(char*));
    
    while(1) {

    scanf("%d", &point);

        while(getchar() != '\n');

        if (point == -1) {

           free(filename);

           for (int i = 0; i < count; i++) {
               free(files[i]);
           } 

           free(files);

           return 0;
        }
        
        if (point == 1) {
           read_file(filename);
        } 

        if (point == 2) {
           write_file(filename);
        }
        
        if (point == 3) {
           
           printf("Введите смещение: ");
           int shift = 0;
           scanf("%d", &shift);
           
           count = get_files("./ai_modules/", files);

           for (int i = 0; i < count; i++) {

                concatenate("./ai_modules/", filename, files[i]);
                cipher(filename, shift);

           }

           
           
          
        } 
    }

    return 0;
}