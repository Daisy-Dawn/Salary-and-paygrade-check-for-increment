#include <stdio.h>
#include <stdlib.h>

//write a program that checks the paygrade of a staff in order to determine increment in salary//

int main(void) 
{
  int paygrade, i = 5000, k = 10000, age, j = 3000;

  printf("Welcome User\n\nPlease enter your age:\t");
  scanf("%d", &age);

  printf("Please enter your current salary:\t");
  scanf("%d", &paygrade);

  if(age >= 60 && paygrade >= 70000)
    printf("Your new salary = %d + 5000 = %d\n", paygrade, paygrade + i);

    else if (age >= 50 && paygrade >= 50000)
      printf("Your new salary = %d + 10000 = %d", paygrade, paygrade + k);
      
  else if(age >= 18 && paygrade >= 30000)
    printf("Your new salary = %d + 3000 = %d", paygrade, paygrade + j);
    
else
    printf("Sory, no increment for you");

  printf("\n\nEnd of Program\n");
  sleep(5);
  system("clear");
  printf("Welcome User\n");
  
  return 0;
}