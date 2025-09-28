#include <stdio.h>

int main (void){

char choice1;
char choice2;

printf("What room Do you want to control?\npress 'K' for the Kitchen\npress 'L' for the Living room\n");
scanf(" %c", &choice1);

switch(choice1)
{ 
       case 'K':
       case 'k':
                    printf("Lights or Thermostat? \n");
                    scanf(" %c", &choice2);
                    
                    switch(choice2)
                    {
                      case 'l':
                      case 'L':
                      printf("Turning on bright task lighting");

                      break;

                      case 'T':
                      case 't':
                      printf("Setting kitchen temperature");

                      break;

                      default: printf("invalid input \n");
                    }
       break;

       case 'L':
       case 'l':
                    printf("Lights or Thermostat? \n");
                    scanf(" %c",&choice2);
                    
                    switch(choice2)
                    {
                      case 'l':
                      case 'L':
                      printf("Adjusting Ambient Lighting");

                      break;

                      case 'T':
                      case 't':
                      printf("Setting Living Room Temperature");
                    
                      break;

                    default: printf("invalid input \n");
                    }
       break;   
    default: printf("Invalid input \n");
}

return 0;
}