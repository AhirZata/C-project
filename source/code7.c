#include <stdio.h>
#include <stdbool.h>

int main () {

    int temp;
    bool sunny = true;

    printf("Enter the wheater temp:");
    scanf("%d", &temp);

    if (temp >= 0 && temp <=30 && sunny){
        printf("The wheater is goog!\n");
    }
    else {
        printf("The wheater is bad!\n");
    }

return 0;
}
