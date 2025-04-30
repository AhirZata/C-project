#include <stdio.h>

int main () {

    
    //"define some variable"
    int clock = 0;


    //"getting some input from user"
    printf("what time is it: (0 or 24):");
    scanf("%d", &clock);


    //"set condition and print result!"
    if(clock >=7 && clock <=17){
        printf("The air is day\n");
    }
    else if (clock >= 18 && clock <=24 || clock >= 0 && clock <=5 ){
        printf("The air is dark\n");
    }
    else {
        printf("The number that you enter is not valid!\n");
    }


return 0;
}
