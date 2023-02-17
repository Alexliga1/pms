#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PROFILE 100 // maximum number of accounts that can be stored
#define MAX_UN_LEN 20 // maximum length of a username
#define MAX_PW_LEN 20 // maximum length of a password

struct account {
    char username[MAX_UN_LEN]; // the username for an account
    char password[MAX_PW_LEN]; // the password for an account
};
// void viewPasswords() {
//     for (int i = 0; i < numPasswords; i++) {
//         printf("Username: %s, Password: %s\n", passwords[i].username, passwords[i].password);
//     }
// }
int main() {
    struct account accounts[MAX_PROFILE]; // array to store accounts
    int num_accounts = 0; // number of accounts currently stored

  char username[50];
    char password[50];

   
    printf("=======================================================\n");
    printf("|              Password Management System              |\n");
    printf("=======================================================\n");

    printf("\nUsername: ");
    scanf("%s", username);

    printf("Password: ");
    scanf("%s", password);

    if (strcmp (password, "admin") == 0)
    {
        printf("\n==============================================\n");
        printf("|               Login Successful              |\n");
        printf("==============================================\n");
    // loop to continuously display menu of options to user
    while (1) {
        int choice; // user's menu choice
        printf("1. Add Profile\n");
        printf("2. View Password\n");
        printf("3. Exit\n");
        printf("Next: ");
        scanf("%d", &choice); // read user's choice from input

        // perform action based on user's choice
        if (choice == 1) {
            // add a new account
            if (num_accounts == MAX_PROFILE) {
                printf("Error: Maximum number of accounts reached\n");
                continue; // return to menu if maximum accounts reached
            }

            struct account new_account;

            printf("Enter your username: ");
            scanf("%s", new_account.username); // read username from input

            printf("Set your password: ");
            scanf("%s", new_account.password); // read password from input

            accounts[num_accounts] = new_account; // add new account to array
            num_accounts++; // increment number of accounts

            printf("Success! Your account has been added.\n");
        } else if (choice == 2) {
            // view an existing account
            if (strcmp (password, "admin") == 0)
    {
            if (num_accounts == 0) {
                printf("Error! : No accounts founded\n");
                continue; // return to menu if no accounts added
            }
    }
    else {
         printf("\n==============================================\n");
        printf("|                Login Failed                 |\n");
        printf("==============================================\n");
        printf("|   The username and/or password you entered  |\n");
        printf("|       is incorrect. Please try again.       |\n");
        printf("==============================================\n");
    }

            int index;
            printf("Enter account index (0 to %d): ", num_accounts-1);
            scanf("%d", &index); // read account index from input

            if (index < 0 || index >= num_accounts) {
                printf("Error: Invalid account index\n");
                continue; // return to menu if invalid index
            }

            struct account selected_account = accounts[index];

            printf("Username: %s\n", selected_account.username);
            printf("Password: %s\n", selected_account.password);
        } else if (choice == 3) {
            // exit the program
            printf("Exiting...\n");
            break;
        } else {
            // invalid menu choice
            printf("Error: Invalid choice\n");
        }
    }

    }
    else
    {
        printf("\n==============================================\n");
        printf("|                Login Failed                 |\n");
        printf("==============================================\n");
        printf("|   The username and/or password you entered  |\n");
        printf("|       is incorrect. Please try again.       |\n");
        printf("==============================================\n");
    }

    return 0;
}
