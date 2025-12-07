#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50];
    int marks[5];
    int highest = 0, topIndex = 0;
    float total = 0, average;
    
    for(int i = 0; i < 5; i++) {
        printf("Enter student %d name: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter marks: ");
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    
    average = total / 5;
    

    printf("Student Name\tMarks:\n");

    for(int i = 0; i < 5; i++) {
        printf("%s\t\t%d\n", names[i], marks[i]);
    }

    
    highest = marks[0];
    topIndex = 0;
    for(int i = 1; i < 5; i++) {
        if(marks[i] > highest) {
            highest = marks[i];
            topIndex = i;
        }
    }
    
    printf("\nTop Student: %s with %d marks\n", names[topIndex], highest);
    printf("Class Average: %.2f\n", average);
    
    return 0;
}