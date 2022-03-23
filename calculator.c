#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compute(int first, int second, char op)
{
  switch (op)
  {
  case '+':
    printf("Result: %d\n", first + second);
    break;
  case '-':
    printf("Result: %d\n", first - second);
    break;
  case '*':
    printf("Result: %d\n", first * second);
    break;
  case '/':
    printf("Result: %d\n", first / second);
    break;
  default:
    printf("Invalid operator\n");
  }
}

int main()
{
  double first_num, second_num;
  char operator, answer;

  while (1)
  {
    printf("Enter a first number: \n> ");
    scanf("%lf", &first_num);

    printf("Enter an operation: \n> ");
    scanf(" %c", &operator);

    printf("Enter a second number: \n> ");
    scanf("%lf", &second_num);

    if (operator== '+' || operator== '-' || operator== '*' || operator== '/')
    {
      compute(first_num, second_num, operator);
      printf("Do you want to continue? (y/n) \n> ");
      scanf(" %c", &answer);
    }
    else
    {
      printf("Invalid operator\n");
      printf("Do you want to continue? (y/n) \n> ");
      scanf(" %c", &answer);
    }

    if (answer == 'n')
    {
      break;
    }
  }

  return 0;
}