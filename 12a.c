#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[30];
    int age;
};

int main() {
    struct Student students[3] = {
        {"Alice", 21},
        {"Bob", 22},
        {"Charlie", 20}
    };

    FILE *fp_bin, *fp_txt;
    struct Student s;

    // Step 1: Write to a binary file
    fp_bin = fopen("students.bin", "wb");
    if (fp_bin == NULL) {
        printf("Error creating binary file.\n");
        return 1;
    }
    fwrite(students, sizeof(struct Student), 3, fp_bin);
    fclose(fp_bin);

    // Step 2: Read from the binary file using fread()
    fp_bin = fopen("students.bin", "rb");
    if (fp_bin == NULL) {
        printf("Error opening binary file for reading.\n");
        return 1;
    }
    printf("Reading from binary file using fread():\n");
    while (fread(&s, sizeof(struct Student), 1, fp_bin)) {
        printf("Name: %s, Age: %d\n", s.name, s.age);
    }
    fclose(fp_bin);

    // Step 3: Write to a text file for fscanf demo
    fp_txt = fopen("students.txt", "w");
    if (fp_txt == NULL) {
        printf("Error creating text file.\n");
        return 1;
    }
    for (int i = 0; i < 3; i++) {
        fprintf(fp_txt, "%s %d\n", students[i].name, students[i].age);
    }
    fclose(fp_txt);

    // Step 4: Read from the text file using fscanf()
    fp_txt = fopen("students.txt", "r");
    if (fp_txt == NULL) {
        printf("Error opening text file for reading.\n");
        return 1;
    }
    printf("\nReading from text file using fscanf():\n");
    while (fscanf(fp_txt, "%s %d", s.name, &s.age) != EOF) {
        printf("Name: %s, Age: %d\n", s.name, s.age);
    }
    fclose(fp_txt);

    return 0;
}
