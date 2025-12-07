#include <stdio.h>
#include <string.h>

int main() {
    char categories[3][20] = {"Appetizers", "Main Course", "Desserts"};
    char items[3][3][30] = {
        {"Spring Rolls", "Garlic Bread", "Soup"},
        {"Pasta", "Steak", "Burger"},
        {"Ice Cream", "Cake", "Pudding"}
    };
    float prices[3][3] = {
        {7.5, 6.0, 8.5},
        {15.0, 25.0, 12.0},
        {5.0, 9.5, 6.5}
    };
    
    printf("RESTAURANT MENU:\n\n");
    for(int i = 0; i < 3; i++) {
        printf("%s:\n", categories[i]);
        for(int j = 0; j < 3; j++) {
            printf("  %s - $%.2f\n", items[i][j], prices[i][j]);
        }
        printf("\n");
    }
    
    printf("Budget Friendly Options under $10:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(prices[i][j] < 10.0) {
                printf("%s - %s: $%.2f\n", categories[i], items[i][j], prices[i][j]);
            }
        }
    }
    
    return 0;
}