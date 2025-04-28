#include <stdio.h>
#include <ctype.h>

int main () {

    char unit;
    float temp;

    printf("is the temperature in (F) or (C)?:");
    scanf(" %c", &unit);

    unit = toupper(unit); // fix upper case letter 


    if(unit == 'C') {
        printf("Enter the temp is celsius:");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temp in farenheit is: %.1f\n", temp);
    
    }
    else if(unit == 'F') {
        printf("Enter the temp in Farenheit:");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temp in Farenheit is: %.1f\n", temp);
    }
    else{
        printf("%c is not a valid unit of measurment\n", unit);
    }

    return 0;
}
