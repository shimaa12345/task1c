#include <stdio.h>
#include <string.h>

#define MAX_USERNAME_LEN 32
#define MAX_PASSWORD_LEN 32

struct User {
  char username[MAX_USERNAME_LEN];
  char password[MAX_PASSWORD_LEN];
};

// Array to store registered users
struct User users[100];

// Number of registered users
int numUsers = 0;

// Function to register a new user
void registerUser() {
  struct User newUser;

  printf("Enter your username: ");
  scanf("%s", newUser.username);

  printf("Enter your password: ");
  scanf("%s", newUser.password);

  // Add the new user to the array
  users[numUsers++] = newUser;

  printf("User successfully registered!\n");
}

// Function to authenticate a user
int authenticateUser() {
  char username[MAX_USERNAME_LEN];
  char password[MAX_PASSWORD_LEN];

  printf("Enter your username: ");
  scanf("%s", username);

  printf("Enter your password: ");
  scanf("%s", password);

  // Check if the user exists
  for (int i = 0; i < numUsers; i++) {
    if (strcmp(username, users[i].username) == 0 &&
        strcmp(password, users[i].password) == 0) {
      return 1;
    }
  }

  // User does not exist or password is incorrect
  return 0;
}

int main() {
  int choice;

  printf("Welcome to the user authentication system!\n");

  do {
    printf("1. Register\n");
    printf("2. Login\n");
    printf("3. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        registerUser();
        break;
      case 2:
        if (authenticateUser()) {
          printf("User successfully logged in!\n");
        } else {
          printf("Invalid username or password!\n");
        }
        break;
      case 3:
        exit(0);
        break;
      default:
        printf("Invalid choice!\n");
    }
  } while (choice != 3);

  return 0;
}
