#include <stdio.h>
#include <stdlib.h>


#define CONTACT 100
#define NAME 50
#define NUMBER 10


typedef struct {
        char name[CONTACT][NAME];
        int number[CONTACT][NUMBER];
    } t_contact;





void add_contact(char name[], char number[]) {
    char ch;

    while(scanf("%c", &ch) != 'q') {
        
    }

}

void show_contact() {

}



int main() {

    int n, flag = 1;
    char *name = malloc(50 * sizeof(char));
   
    char number[NUMBER];

    t_contact phone_book;

    phone_book.name[0][0] = 'T';
    phone_book.name[0][1] = 'i';
    phone_book.name[0][2] = 'm';
    phone_book.name[0][3] = 'u';
    phone_book.name[0][4] = 'r';

    phone_book.name[1][0] = 'I';
    phone_book.name[1][1] = 'l';
    phone_book.name[1][2] = 'd';
    phone_book.name[1][3] = 'a';
    phone_book.name[1][4] = 'r';

    phone_book.number[0][0] = 5437;
    phone_book.number[1][0] = 2443;
    
    int j = 0;
    for (int i = 0; i < 2; i++) {
        
             printf("%s %d\n", phone_book.name[i], phone_book.number[i][0]);
             j++;
        
    }

   




    printf("1. Добавить контакт\n");
    printf("2. Показать контакты\n");
    printf("3. Выход\n");

    

    while(flag) {


    if (scanf("%d", &n) != 1) {
        printf("Вы ввели не корректное значение\n");
        break;
    }
    while (getchar() != '\n');    
        
    if (n == 1) {
        printf("Введите имя: \n");
        char chn;
        
        for (int i = 0; i < NAME; i++) {
            scanf("%c", &chn);
            
            name[i] = chn;
            
            
            if (chn == '\n') {
                printf("Имя записано\n");
                //printf("%s\t", name);
                break;
            }
            
            
            
        }

        printf("Введите телефон: \n");
        char cht;
        for (int i = 0; i < NUMBER; i++) {
            scanf("%c", &cht);
            //while (getchar() != '\n');
            
            if (cht == '\n') {

                printf("Телефон записан\n");
                break;
            }
            number[i] = cht;
        }

    }
        
    
    else if (n == 2) {
        
            printf("Имя: %s Телефон: %s", name, number);
        
    }
    else if (n == 3) {
        printf("Выбран выход\n");
        flag = 0;
    } else {
        printf("Вы ввели неправильный номер\n");
    }
    }

    return 0;
}

