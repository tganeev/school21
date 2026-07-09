#include <stdio.h>

int main() {

    char buffer[256];
    printf("привет всем!\n");
    
    while((fgets(buffer, sizeof(buffer), stdin)) != NULL) {
        printf("прочитано байт: %s", buffer);
    }


    for (int i = 0; i < strlen(buffer); i++) {
        printf("%c ", buffer[i]);
    }

    return 0;
}