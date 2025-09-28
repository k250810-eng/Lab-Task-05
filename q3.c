#include <stdio.h>

int main (void) {

float  a = 0;
float  b = 0;
float  c = 0;
float disc;

printf("Input the value of a \n");
scanf("%f",&a);

printf("Input the value of b \n");
scanf("%f",&b);

printf("Input the value of c \n");
scanf("%f",&c);

disc = (b*b) - (4*a*c);

if (disc > 0)
{
    printf("two real roots \n");
}

else if (disc == 0)
{
    printf("one real root \n");
}

else if (disc < 0)
{
    printf("imaginary roots \n");
} 

printf("%.1f", disc);

return 0;
}