#include <stdio.h>
#include <string.h>

int main() {
    char string[100], substring[50];

    // Input the main string
    printf("Enter the main string: ");
    fgets(string, sizeof(string), stdin);
    // Remove the newline character from the input
    string[strcspn(string, "\n")] = '\0';

    // Input the substring
    printf("Enter the substring: ");
    fgets(substring, sizeof(substring), stdin);
    // Remove the newline character from the input
    substring[strcspn(substring, "\n")] = '\0';

    // Check if the substring is present
    if (strstr(string, substring)) {
        printf("The substring \"%s\" is present in the string \"%s\".\n", substring, string);
    } else {
        printf("The substring \"%s\" is not present in the string \"%s\".\n", substring, string);
    }

    return 0;
}
