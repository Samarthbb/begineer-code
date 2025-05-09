#include <stdio.h>

int main() {
    int score;
    char grade;

    // Prompt user to enter test score
    printf("Enter the test score (0-100): ");
    scanf("%d", &score);

    // Validate score range
    if (score < 0 || score > 100) {
        printf("Invalid score! Please enter a score between 0 and 100.\n");
        return 1;  // Exit program if the score is out of range
    }

    // Determine the grade based on score
    if (score >= 90) {
        grade = 'A';
    } 
    else if (score >= 80) {
        grade = 'B';
    }
    else if (score >= 70) {
        grade = 'C';
    }
    else if (score >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    // Display the grade
    printf("The grade for the score %d is: %c\n", score, grade);

    return 0;
}
