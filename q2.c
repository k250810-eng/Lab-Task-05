#include <stdio.h>

int main(void) {

int choice;
char color;

printf(" Is the signal ON or OFF? \n");
printf(" PRESS 1 or 0 \n --->");
scanf("%d",&choice);

switch (choice)
{
 case 1:
 printf(" Enter the color that the signal has (R for Red, Y for Yellow, G for Green) \n --->");
 scanf(" %c",&color);
 switch(color)
   {
           case 'R':
           case 'r':
           printf("\n---STOP---\n");
           break;
           
           case 'Y':
           case 'y':
           printf("\n---CAUTION---\n");
           break;

           case 'G':
           case 'g':
           printf("\n---GO---\n");
           break;
   }
    break;

case 0: 
     printf("Signal Off");
     break;

 default: printf("Wrong input try again \n");
}
return 0;
}