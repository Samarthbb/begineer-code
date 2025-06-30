#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[100];

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Demonstrate strlen()
    printf("\nLength of the first string: %zu", strlen(str1));
    printf("\nLength of the second string: %zu", strlen(str2));

    // Demonstrate strcpy()
    strcpy(str3, str1);
    printf("\n\nAfter copying, str3 contains: \"%s\"", str3);

    // Demonstrate strcat()
    strcat(str3, str2);
    printf("\nAfter concatenating str1 and str2, str3 contains: \"%s\"", str3);

    // Demonstrate strcmp()
    int comparison = strcmp(str1, str2);
    if (comparison == 0) {
        printf("\n\nThe strings str1 and str2 are equal.");
    } else if (comparison < 0) {
        printf("\n\nThe string str1 is lexicographically smaller than str2.");
    } else {
        printf("\n\nThe string str1 is lexicographically greater than str2.");
    }

    return 0;
}
