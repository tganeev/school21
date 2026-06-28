#include <stdio.h>
#include <stdlib.h>


#define CONTACT 100
#define NAME 50
#define NUMBER 10


typedef struct {
        char name[CONTACT][NAME];
        int number[NUMBER];
    } t_contact;




void menu() {
    printf("1. Добавить контакт\n");
    printf("2. Показать контакты\n");
    printf("3. Выход\n");
}


void add_contact(t_contact *phone_book, int *count) {
    int repeat = 1; 

    while(repeat) {
            while (getchar() != '\n');  
    printf("Введите имя: \n");
                
        for (int i = 0; i < NAME; i++) {
            phone_book->name[*count][i] = getchar();
            if (phone_book->name[*count][i] == '\n') {
                phone_book->name[*count][i] = '\0';
                //count++;
                i = 0;
                break;
            }
            
        }
       
        printf("Введите телефон: \n");
       

            scanf("%d", &phone_book->number[*count]);
            *count = *count + 1;
            printf("Телефон сохранен, счетчик: %d\n", *count);

            
            while (getchar() != '\n');   
            
       

        printf("Хотите продолжить ввод?(y/n)\n");
        char q = getchar();

            if (q == 'y') {
                repeat = 1;
            }
            else if (q == 'n') {
                repeat = 0;
                //return phone_book;
                
            }
    }

}

void show_contact(t_contact *phone_book, int *count) {
    
    printf("Список контактов: \n");
           for (int i = 0; i < count; i++) {
                printf("Имя: %s | Телефон: %d\n", phone_book->name[i], phone_book->number[i]);
            }
}



int main() {

    int n, flag = 1, count = 0, repeat = 1;
    char *name = malloc(50 * sizeof(char));
       
    char number[NUMBER];

    t_contact phone_book;

    
    menu();

    while(flag) {


    if (scanf("%d", &n) != 1) {
        printf("Вы ввели не корректное значение\n");
        break;
    }
    //while (getchar() != '\n');    
        
    if (n == 1) {
        //while (getchar() != '\n');  
        add_contact(&phone_book, &count);
        menu();
    }
        
    else if (n == 2) {
        show_contact(&phone_book, count);        
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

