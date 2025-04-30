#include <stdio.h>
#include <stdbool.h>

int main () {

    char answer;
    bool inAhurry;

    printf("Are you in a hurry? (Yes or NO)");
    scanf("%c", &answer);


    if (answer == true) {
        inAhurry = true;
    }
    else {
        inAhurry = false;
    }
    if (inAhurry){
        printf("move fast!\n");
    }
    else {
        printf("move slowly!\n");
    }
    return 0;
}
