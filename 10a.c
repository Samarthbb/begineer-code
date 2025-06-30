#include <stdio.h>

union Data {
    short int num; // 2 bytes (assuming short int is 2 bytes)
    char bytes[2]; // 2 characters (1 byte each)
};

int main() {
    union Data data;

    // Assign a value to the short int
    data.num = 0x1234;

    // Display the values
    printf("Short int value: 0x%X\n", data.num);
    printf("Byte 1: 0x%X\n", data.bytes[0]);
    printf("Byte 2: 0x%X\n", data.bytes[1]);

    // Modify individual bytes and observe the effect on short int
    data.bytes[0] = 0x56; // Modify the first byte
    data.bytes[1] = 0x78; // Modify the second byte

    printf("\nAfter modifying bytes:\n");
    printf("Short int value: 0x%X\n", data.num);
    printf("Byte 1: 0x%X\n", data.bytes[0]);
    printf("Byte 2: 0x%X\n", data.bytes[1]);

    return 0;
}
