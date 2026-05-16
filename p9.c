/*login system : User must enter correct username and password*/


#include <iostream>
 void main()
{
    int username = 12345, password = 67890;
    int u , p;
    printf("Enter username: ");
    scanf("%d", &u);
    printf("Enter password: ");
    scanf("%d", &p);
    if (u == username && p == password)
    {
        printf("Login successful!");
    }
    else
    {
        printf("Invalid Credentials.");
    }