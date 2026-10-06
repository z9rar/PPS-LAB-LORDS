#include <stdio.h>
int main ()
{
    int password;
    printf("Enter your password : ");
    scanf("%d", &password);
    if (password == 1234)
    {
        printf("Login Succesful");
    }
    else
    {
        printf("Incorrect password");
    }
    return 0;
}
