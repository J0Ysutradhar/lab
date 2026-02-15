// question 1: Right C program to find the day name depending on user input. User will provide any number from 1 to 7.

#include <stdio.h>
 int main (){

     int day;
     printf("Enter a number betwwen 1 to 7: ");
     scanf("%d", &day);
     if (day ==1){printf("Today is  Monday");}
     if (day ==2){printf("Today is  TUE");}
     if (day ==3){printf("Today is  Wed");}
     if (day ==4){printf("Today is  Thu");}
     if (day ==5){printf("Today is  Friday");}
     if (day ==6){printf("Today is  Sat");}
     if (day ==7){printf("Today is  Sun");}

   return 0;
 }

// Question 2: Find whether the inputted character is a vowel or not.

#include <stdio.h>

int main()
{
    char character;
    printf("Enter a Character: ");
    scanf("%c", &character);
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
    {
        printf("%c is a vowel", character);
    }

    else
    {
        printf("%c is not a vowel", character);
    }

    return 0;
}

// Qestion 3: Find whether the inputted character is a vowel or Consonant befor you have to check it's a latter.

#include <stdio.h>

int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    if (character >= 'a' && character <= 'z')
    {
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
        {
            printf("%c is a vowel", character);
        }

        else
        {
            printf("%c It is not a vowel", character);
        }
    }

    else
    {
        printf("%c It is not character", character);
    }

    return 0;
}
