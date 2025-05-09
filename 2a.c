#include <stdio.h>
int main() {
    double quiz1, quiz2, quiz3, quiz4;
    double midterm1, midterm2;
    double final_exam;
    double quiz_avg, midterm_avg, final_score, overall_score;

    // Input scores for the quizzes
    printf("Enter the scores for 4 quizzes (out of 100): ");
    scanf("%lf %lf %lf %lf", &quiz1, &quiz2, &quiz3, &quiz4);

    // Calculate the average score of the quizzes
    quiz_avg = (quiz1 + quiz2 + quiz3 + quiz4) / 4;

    // Input scores for the midterms
    printf("Enter the scores for 2 midterms (out of 100): ");
    scanf("%lf %lf", &midterm1, &midterm2);

    // Calculate the average score of the midterms
    midterm_avg = (midterm1 + midterm2) / 2;

    // Input score for the final exam
    printf("Enter the score for the final exam (out of 100): ");
    scanf("%lf", &final_exam);

    // Calculate the overall score with weights
    overall_score = (quiz_avg * 0.30) + (midterm_avg * 0.40) + (final_exam * 0.30);

    // Display the results
    printf("Quiz Average: %.2lf\n", quiz_avg);
    printf("Midterm Average: %.2lf\n", midterm_avg);
    printf("Final Exam Score: %.2lf\n", final_exam);
    printf("Overall Course Score: %.2lf\n", overall_score);
return 0;
}
