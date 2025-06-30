#include <stdio.h>
#include <stdlib.h>

// Define a structure to use with fwrite()
struct Student {
    int id;
    char name[30];
    float marks;
};

int main() {
    FILE *fp;

    // --------- Using fprintf() ----------
    fp = fopen("students_text.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for fprintf()\n");
        return 1;
    }

    int id = 1;
    char name[] = "Alice";
    float marks = 85.5;

    // Writing formatted text
    fprintf(fp, "ID: %d\nName: %s\nMarks: %.2f\n", id, name, marks);
    fclose(fp);
    printf("Data written using fprintf() to students_text.txt\n");

    // --------- Using fwrite() ----------
    fp = fopen("students_binary.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for fwrite()\n");
        return 1;
    }

    struct Student s = {2, "Bob", 92.3};

    // Writing binary data
    fwrite(&s, sizeof(struct Student), 1, fp);
    fclose(fp);
    printf("Data written using fwrite() to students_binary.dat\n");

    return 0;
}
