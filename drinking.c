#include <stdio.h>

int getAge(void)
{
  int a;
  printf("How old are you?: ");
  scanf("%d", &a);
  return a;
}

int main(void)
{
  int age;
  age = getAge();
  
  if (age >= 21)
    printf("You can drink!\n");
  else if (age < 0)
    printf("That doesn't make any sense.");
  else
    printf("You cannot drink, man.\n");

  return 0;
}
