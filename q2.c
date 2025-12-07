#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    int pos = 0;
    
    printf("Enter email address: ");
    scanf("%s", email);
    
    for(int i = 0; i < strlen(email); i++) {
        if(email[i] == '@') {
            pos = i + 1;
            break;
        }
    }
    
    if(pos > 0) {
        printf("Domain: %s\n", &email[pos]);
    } else {
        printf("Invalid email format\n");
    }
    
    return 0;
}