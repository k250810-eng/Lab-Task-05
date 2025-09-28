#include <stdio.h>
#include <string.h>

int main (void){

char username [100];
char password [100];

char strpassword [] = "Usman123";
char strusername [] = "Usman";


printf("Enter your Username: \n");
scanf(" %[^\n]", &username);

printf("Enter your Password: \n");
scanf(" %99[^\n]", &password);

if (strcmp(strusername, username) != 0  && strcmp(strpassword, password) != 0)
{
    printf("Both password and usernames are incorrect \n");
}
else if(strcmp(strusername, username) != 0)
{
    printf("Incorrect username \n");    
}
else if (strcmp(strpassword, password) != 0)
{
    printf("Only the Password is incorrect \n");
}
else 
{
    printf("WELCOME BACK");
}

return 0;
}