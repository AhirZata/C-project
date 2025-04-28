#include <stdio.h>
int main () {

    char grade;

    printf("Enter a letter grade:");
    scanf("%c", &grade);

    switch (grade){
    case 'A':
        printf("perfect\n");
        break;

    case 'B':
        printf("You did good\n");
        break;

    case 'C':
        printf("you did ok\n");
        break;

    case 'D':
        printf("At last it's not an F\n");
        break;

    case 'F':
        printf("you failed\n");
        break;
    
    default:
        printf("not a valid grade");

    }


}
