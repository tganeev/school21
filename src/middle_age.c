#include <stdio.h>
#include <stdlib.h>

    typedef struct {
        char **first_name;
        char **second_name;
        int **age;
    } data;


int main() {

    int n;
    scanf("%d", &n);
    //while(getchar() != '\n');
    printf("N: %d\n", n);
    char ch;

    int count = n;
    
    data person;
     
    
    int y = 0;
    
    person.first_name = malloc(n * sizeof(char*));
    person.second_name = malloc(n * sizeof(char*));
    person.age = malloc(n * sizeof(int*));
     /*

    for (int i = 0; ch != '\n'; i++) {
            scanf("%c", &ch);
            person.first_name[i] = ch;
        }

    */
       
    while(1) {

         int i = 0, j = 0, p = 0;
         
        person.first_name[y] = malloc(10 * sizeof(char));
        person.second_name[y] = malloc(10 * sizeof(char));
        person.age[y] = malloc(2 * sizeof(int));
       
           while(getchar() != '\n');
        
        
        printf("Введите имя: ");
        //ch = getchar();
        while(1) {
            
            ch = getchar();
            if (ch == '\n') break;
            person.first_name[y][i] = ch;
            i++;
            
        }
        
       
        

        printf("Введите фамилию: ");
        
        while(1) {
            
            ch = getchar();
            if (ch == '\n') break;
            person.second_name[y][j] = ch;
            j++;
            
        }

        printf("Введите возраст: ");
        
        scanf("%d", &person.age[y][p]);
                

        n--;
        y++;
        if (n == 0) break;
        
       // printf("N: %d\n", n);
        
    }

      
    int sum_age = 0;
    int avg_age = 0;
   
    for (int i = 0; i < count; i++) {
            
        sum_age += person.age[i][0];
    }

    avg_age = sum_age / count;

    printf("Средний возраст: \n");

    for (int i = 0; i < count; i++) {
        for (int j = 0; person.first_name[i][j] != '\0'; j++) {
            printf("%c", person.first_name[i][j]);
        }
            printf(", ");
    }
   

    printf("%d", avg_age);

    printf("\n");




    return 0;
}