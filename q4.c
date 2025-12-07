#include <stdio.h>
#include <string.h>

int main() {
    char message[200];
    
    printf("Enter message to encrypt: ");
    gets(message);
    
    for(int i = 0; i < strlen(message); i++) {
        if(message[i] >= 'a' && message[i] <= 'z') {
            message[i] = ((message[i] - 'a' + 3) % 26) + 'a';
        } else if(message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = ((message[i] - 'A' + 3) % 26) + 'A';
        }
    }
    
    printf("Encrypted message: %s\n", message);
    
    return 0;
}