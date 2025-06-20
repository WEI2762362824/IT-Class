#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    
    printf("Please enter a username (at least 8 characters): ");
    scanf("%s", username);
    
    // Validate username length
    while (strlen(username) < 8) {
        printf("Invalid input! Username must be at least 8 characters: ");
        scanf("%s", username);
    }
    
    printf("Username set successfully: %s\n", username);
    return 0;
}
