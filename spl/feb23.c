#include <stdio.h>
int main(){
    char ch;
    printf("Enter a Character: ");
    scanf('%c', &ch);
    if ((ch>='a' and ch<='z')or(ch>='A' and ch<='Z')){
        printf("%c is a character", ch);
    }
    else{
        printf("%c is not a character", ch);
    }

    return 0;
}