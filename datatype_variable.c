#include <stdio.h>
#include <stdbool.h>

int main() {

    // DATA TYPE MEANS TYPE OF DATA THAT VARIABLE CAN STORE.
    //VARIABLE IS A PLACE TO STORE VALUES.

    // 1. Data Types with Variables
    int age = 20;              // integer type
    float percentage = 85.5;   // float type
    double pi = 3.14159;  // double type
    char grade = 'A';          // character type
    bool isPassed = true;      // boolean type

    // 2. Printing Values
    printf("Integer (age) = %d\n", age);
    printf("Float (percentage) = %.2f\n", percentage);
    printf("Double (pi) = %.10lf\n", pi);
    printf("Character (grade) = %c\n", grade);
    printf("Boolean (isPassed) = %d\n\n", isPassed);

    // 3. Size of Data Types
    printf("Size of int = %lu bytes\n", sizeof(age));
    printf("Size of float = %lu bytes\n", sizeof(percentage));
    printf("Size of double = %lu bytes\n", sizeof(pi));
    printf("Size of char = %lu bytes\n\n", sizeof(grade));

    // 4. Constant Variable
    const int MAX = 100;
    printf("Constant MAX = %d\n\n", MAX);

    // 5. Multiple Variable Declaration
    int a = 10, b = 20, c = 30;
    printf("Multiple Variables: \n a=%d, b=%d, c=%d\n\n", a, b, c);

    // 6. Updating Variable Values
    printf("age before update: %d\n",age);
    age = 25;
    printf("age after Updated : %d\n", age);

    return 0;
}