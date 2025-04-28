#include <stdio.h>
int main () {

    int age;

    printf("Enter your age:");
    scanf("%d", &age);

    if (age >= 18) {
        printf("you are now signed up\n");
    }
    else  {
        printf("not able to signed up\n");
    }
    
    return 0;
}
