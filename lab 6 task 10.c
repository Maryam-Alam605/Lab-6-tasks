#include <stdio.h>

int main() {
    int n, i, table;
    char answer;

    do {
        printf("Which table do you want?\n");
        scanf("%d", &n);

        i = 1;  
        while (i <= 10) {
            table = n * i;
            printf("%d x %d = %d\n", n, i, table);
            i++;
        }

        printf("Do you want another table? (Y/N): ");
        scanf(" %c", &answer);  

    } while (answer == 'Y' || answer == 'y');

    return 0;
}

