#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50];
    int marks[5];
    int highest = 0, topIndex = 0;
    
    for(int i = 0; i < 5; i++) {
        printf("Enter student %d name: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter marks: ");
        scanf("%d", &marks[i]);
    }
    
    highest = marks[0];
    topIndex = 0;
    
    for(int i = 1; i < 5; i++) {
        if(marks[i] > highest) {
            highest = marks[i];
            topIndex = i;
        }
    }
    
    printf("\nHighest scorer: %s with %d marks\n", names[topIndex], highest);
    
    return 0;
}