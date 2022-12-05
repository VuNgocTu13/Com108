
/**
*   Program login, enter username and passwrod until they correct
*/
 
#include <stdio.h>
#include <string.h>   // for compare string by strcmp
 
int main() {
 
    // username and password we have
    char username[] = "abc12345";
    char passwrod[] = "12345";
 
    // username and password user must enter to login
    char user[50], pass[50]; 
 
    printf("Enter your username: ");
    gets(user);
 
    printf("Enter your password: ");
    gets(pass);
 
    while(strcmp(user, username) != 0 || strcmp(pass, passwrod) != 0) {
        printf("\nusername or passwrod incorrect\n");
 
        printf("Enter your username: ");
        gets(user);
 
        printf("Enter your password: ");
        gets(pass);
    }
 
    printf("Login success!\n");
 
    return 0;
}

