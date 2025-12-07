#include <stdio.h>
#include <string.h>

int main() {
    char students[4][20] = {"Ali", "Hamza", "Taimoor", "Alina"};
    char courses[4][4][30] = {
        {"Math", "Physics", "Chemistry", ""},
        {"English", "Urdu", "", ""},
        {"Math", "Physics", "English", "Biology"},
        {"Chemistry", "Physics", "Math", "Computer"}
    };
    int courseCount[4] = {3, 2, 4, 4};
    char searchCourse[30];
    
    printf("Student Course Registrations:\n");
    for(int i = 0; i < 4; i++) {
        printf("%s: ", students[i]);
        for(int j = 0; j < courseCount[i]; j++) {
            printf("%s", courses[i][j]);
            if(j < courseCount[i] - 1) printf(", ");
        }
        printf("\n");
    }
    
    printf("\nEnter course to search: ");
    scanf("%s", searchCourse);
    
    printf("Students taking %s:\n", searchCourse);
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < courseCount[i]; j++) {
            if(strcmp(courses[i][j], searchCourse) == 0) {
                printf("- %s\n", students[i]);
                break;
            }
        }
    }
    
    printf("\nOverloaded Students (more than 3 courses):\n");
    for(int i = 0; i < 4; i++) {
        if(courseCount[i] > 3) {
            printf("- %s (%d courses)\n", students[i], courseCount[i]);
        }
    }
    
    return 0;
}