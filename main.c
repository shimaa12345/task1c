#include <stdio.h>
#include<string.h>
#include <conio.h>
#include <conio.h>


int main() {
  
  char username[15] = "username";
  char password[10] = "password";
  
  printf("\n Enter username: ");
  scanf("%s", username);
  printf(" Enter password: ");
  scanf("%s", password);

  if (strcmp(username, "shimaa") == 0 && strcmp(password, "12345") == 0) {
    printf("\n Login successful!");
  } else {
    printf("\n Login failed.");
  }

  return 0;
}
