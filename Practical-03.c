//Question 01

#include <stdio.h>

int main() {
    float Num1, Num2;

    printf("Enter the First Number: ");
    scanf("%f", &Num1);

    printf("Enter the Second Number: ");
    scanf("%f", &Num2);

    if (Num1 > Num2) {
        printf("The Highest Number is: %f\n", Num1);
    } else if (Num2 > Num1) {
        printf("The Highest Number is: %f\n", Num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}


//Question 02

#include <stdio.h>

int main() {
    int num1, num2, num3, largest, smallest;

    printf("Enter Integer Numbers: ");
    scanf("%d", &num1);

    printf("Enter Integer Numbers: ");
    scanf("%d", &num2);

    printf("Enter Integer Numbers: ");
    scanf("%d", &num3);

    largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    printf("Largest value is: %d\n", largest);

    smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    printf("Smallest value is: %d\n", smallest);

    return 0;
}


//Question 03

#include <stdio.h>

int main() {
    char eName[50];
    printf("Enter employee name: ");
    scanf("%s", eName);

    float bSalary, nSalary, incr;
    printf("Enter basic salary: ");
    scanf("%f", &bSalary);

    if (bSalary < 5000) {
        incr = bSalary * 0.05;
    } else if (bSalary < 10000) {
        incr = bSalary * 0.10;
    } else {
        incr = bSalary * 0.15;
    }

    nSalary = bSalary + incr;

    printf("Employee Name: %s\n", eName);
    printf("New Salary: %.2f\n", nSalary);

    return 0;
}


//Question 04

#include <stdio.h>

float PI = 3.14159;

int main() {
    float radius, diameter, circumference, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Diameter: %f\n", diameter);
    printf("Circumference: %f\n", circumference);
    printf("Area: %f\n", area);

    return 0;
}


//Question 05

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    if (num2 != 0 && num1 % num2 == 0) {
        printf("%d is a multiple of %d\n", num1, num2);
    } else {
        printf("%d is not a multiple of %d\n", num1, num2);
    }

    return 0;
}


//Question 06

#include <stdio.h>

int main() {
    // Uppercase letters
    printf("Integer equivalent of 'A': %d\n", 'A');
    printf("Integer equivalent of 'B': %d\n", 'B');
    printf("Integer equivalent of 'C': %d\n", 'C');

    // Lowercase letters
    printf("Integer equivalent of 'a': %d\n", 'a');
    printf("Integer equivalent of 'b': %d\n", 'b');
    printf("Integer equivalent of 'c': %d\n", 'c');

    // Digits
    printf("Integer equivalent of '0': %d\n", '0');
    printf("Integer equivalent of '1': %d\n", '1');
    printf("Integer equivalent of '2': %d\n", '2');

    // Special symbols
    printf("Integer equivalent of '$': %d\n", '$');
    printf("Integer equivalent of '*': %d\n", '*');
    printf("Integer equivalent of '+': %d\n", '+');
    printf("Integer equivalent of '/': %d\n", '/');

    // Blank character
    printf("Integer equivalent of ' ': %d\n", ' ');

    return 0;
}


//Question 07

#include <stdio.h>

int main() {
    int Bsalary, Exp, Msales, salary = 0;
    char Wplace;

    printf("Enter the Basic Salary: ");
    scanf("%d", &Bsalary);

    printf("Enter the Experience Time Period: ");
    scanf("%d", &Exp);

    printf("Enter the Number Of Monthly Salesmen: ");
    scanf("%d", &Msales);

    if (Exp > 5) {
        salary = Bsalary + (Bsalary * 0.1);
    } else {
        salary = Bsalary;
    }

    printf("Enter the First letter of Work Place: ");
    scanf(" %c", &Wplace);

    if (Wplace == 'C' || Wplace == 'c') {
        salary += 2500;
    }

    if (Msales >= 0 && Msales <= 25000) {
        salary += Msales * 0.1;
    } else if (Msales > 25000 && Msales <= 50000) {
        salary += Msales * 0.12;
    } else if (Msales > 50000) {
        salary += Msales * 0.15;
    }

    printf("Gross Monthly Remuneration of a salesman: %d\n", salary);

    return 0;
}
