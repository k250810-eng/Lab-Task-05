#include <stdio.h>

int main (void){

int choice1;
int choice2;

// supposing that for a CE the course is full ( cause of the ambiguity )

printf("Press: \n1 if you have a prerequisite\n0 if you have none\n");
scanf("%d",&choice1);

switch(choice1)

{
    case 1: 
    printf("Chose your course \n");
    printf("press 1 for CS \n");
    printf("Press 2 for CE \n");
    printf("press 3 for DS \n");
    scanf("%d",&choice2);

        switch (choice2)
    {
        case 1:
        printf("--Enrolled successfully--\n");
        break;

        case 2:
        printf("--Course is full--\n");
        break;
        
        case 3:
        printf("--Enrolled successfully-- \n");
        break;

        default:
        printf("Invalid Input \n");
    }
break;

case 0:
    printf("Chose your course \n");
    printf("press 1 for CS \n");
    printf("Press 2 for CE \n");
    printf("press 3 for DS \n");
    scanf("%d",&choice2);

    if(choice2 == 2)
{
    printf("Cannot enroll: prerequisite missing and course is full\n");
}
    else
{
    printf("--No enrollment without a prerequisite--");
}
    break;

default: 
printf("Wrong Input Detected \n");

}
return 0;
}