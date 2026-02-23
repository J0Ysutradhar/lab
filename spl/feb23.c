#include <stdio.h>
int main(){
    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        printf("%c is a character \n", ch);
    }
    else{
        printf("%c is not a character \n", ch);
        
    }

    return 0;
}