#include <stdio.h>
#include <string.h>

int main() {
    char text[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    
    printf("Enter a string: ");
    gets(text);
    
    for(int i = 0; i < strlen(text); i++) {
        char ch = text[i];
        
        if(ch == ' ') {
            spaces++;
        } else if(ch >= '0' && ch <= '9') {
            digits++;
        } else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    
    return 0;
}