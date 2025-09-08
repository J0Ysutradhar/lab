#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade (A/B/C): ");
    scanf(" %c", &grade); // space before %c to skip any leftover newline

    switch(grade) {
        case 'A':
        case 'a':
            printf("Excellent\n");
            break;
        case 'B':
        case 'b':
            printf("Good\n");
            break;
        case 'C':
        case 'c':
            printf("Average\n");
            break;
        default:
            printf("Invalid Grade\n");
    }

    return 0;
}
