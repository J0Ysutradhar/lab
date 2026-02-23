// #include <stdio.h>
// int main(){
//     char ch;
//     printf("Enter a Character: ");
//     scanf("%c", &ch);
//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
//         printf("%c is a character \n", ch);
//     }
//     else{
//         printf("%c is not a character \n", ch);
        
//     }

//     return 0;
// }

// 1 with switch case 

// #include <stdio.h>
// int main(){
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     switch (ch){
//         case 'a'...'z' :
//         printf("%c is a character \n", ch);
//         break;
//         case 'A'...'Z':
//         printf("%c is a character \n", ch);
//         break;
//         default:
//         printf("%c is not12 a character \n", ch);
    
//     }

//     return 0;
// } 


#include<stdio.h>
int main(){
    int n;
    printf("Enter a number 1 to 12: ");
    scanf("%d", &n);
    switch (n){
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Wrong Input\n");
    }
    return 0;
}