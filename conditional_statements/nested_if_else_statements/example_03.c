#include <stdio.h>

int main() {
    int age;
    
    // Get user input
    printf("Enter Your age: ");
    scanf("%d", &age);
    
    // First level: Check if age is 15 or above
    if (age >= 15) {
        // Second level: Check if age is 22 or above
        if (age >= 22) {
            // Third level: Check if age is 33 or above
            if (age >= 33) {
                printf("You are an adult professional\n");
            } else {
                printf("You are a young adult/student\n");
            }
        } else {
            // Age is between 15-21
            printf("You are a teenager/student\n");
        }
    } else {
        // Age is below 15
        printf("You are a child\n");
    }
    
    return 0;
}