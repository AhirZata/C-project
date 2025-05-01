#include <stdio.h>

int main () {

  int num1;
  int num2;

  printf("Enter your first number:");
  scanf("%d", &num1);
  printf("Enter your second number:");
  scanf("%d", &num2);
  
  //The main point of the code is here://
  float result = (float) num1 / num2; 
  // main point is ...(float)... //

  printf("%f\n", result);
  return 0;
}
