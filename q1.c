#include <stdio.h>

int main (void) 

{

int age = 0;    
float price = 2.50;

  printf("Welcome to the demon slayer movie \n");
  printf("Price of one ticket is 2.50$ \n");
  printf("Please enter your age: \n");
  
  scanf("%d",&age);
  while (age<=0) 
{        
    printf("Your Age cannot be Zero try again \n");
    scanf("%d",&age);
}

  if(age <= 5)
{
    printf("FREE \n");
    price = 0 * price;
}
  else if(age >= 65)
{
    printf("DISCOUNT \n");
    price = price * 0.90;
} 
  else
{
    printf("STANDARD \n");
}   
return 0;
}