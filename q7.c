#include <stdio.h>

int main (void){

unsigned int a;

printf("Enter the value accordingly \n");
printf("Press 1 for Read \n");
printf("combine both by typing 3 for READ and WRITE \n");
printf("Press 4 for Excecuting the command \n");

scanf("%d",&a);

  if(a & 4)
{
    printf("Access granted: full control \n");
}
else 
{
    if((a & 2) && (a & 1))
    {
    printf("Access granted: read and write \n");
    }
    else if((a & 1) &! (a & 2))
    {
    printf("Access granted: Read Only \n");
    }
    else
    {
    printf("Access Denied");
    }

}

return 0;   
}