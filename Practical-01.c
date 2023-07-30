//Question 01

#include <stdio.h>

int main() {
    printf("Janudi Meegoda\n");
    printf("Thakshila Central College \n");
    return 0;
}


//Question 02

#include <stdio.h>

int main(){
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");
    
    return 0;
}

//Question 03

#include <stdio.h>

int main() {
    int VaInt;
    float VaFl;
    double VaDub;
    char VaChar;

    printf("Enter an integer value: ");
    scanf("%d", &VaInt);

    printf("Enter a floating-point value: ");
    scanf("%f", &VaFl);

    printf("Enter a double value: ");
    scanf("%lf", &VaDub);

    printf("Enter a character: ");
    scanf(" %c", &VaChar);

    printf("\nValues entered:\n");
    printf("Integer value: %d\n", VaInt);
    printf("Float value: %.2f\n", VaFl);
    printf("Double value: %.2lf\n", VaDub);
    printf("Character: %c\n", VaChar);

    return 0;
}


//Question 04

#include <stdio.h>

int main() {
    int Num1, Num2, Total;

    printf("Enter First Number: ");
    scanf("%d", &Num1);

    printf("Enter Second Number: ");
    scanf("%d", &Num2);

    Total = Num1 + Num2;

    printf("Total is %d\n", Total);
    return 0;
}


//Question 05

#include <stdio.h>

int main() {
    float Num1, Num2, Avg;

    printf("Enter First Number With Decimals (fractions): ");
    scanf("%f", &Num1);

    printf("Enter Second Number With Decimals (fractions): ");
    scanf("%f", &Num2);

    Avg = (Num1 + Num2) / 2;

    printf("Average is %.2f\n", Avg);
    return 0;
}


//Question 06

#include <stdio.h>

int main() {
    char Name[30];
    int Age;

    printf("Enter Your Name: ");
    scanf("%s", &Name);

    printf("Enter Your Age: ");
    scanf("%d", &Age);

    printf("Hi %s, Your Age is %d.\n", Name, Age);
    return 0;
}


//Question 07

#include <stdio.h>

int main() {
    int A, B, C;

    printf("Enter First Value: ");
    scanf("%d", &A);

    printf("Enter Second Number: ");
    scanf("%d", &B);

    printf("\n\nBefore Swap\nA = %d \nB = %d", A, B);

    C = A;
    A = B;
    B = C;

    printf("\n\nAfter Swap\nA = %d \nB = %d\n\n", A, B);

    return 0;
}


//Question 08

The color: blue
First number: 12345
Second number: 0025
Third number: 1234
Float number: 3.14 Hexadecimal: ff Octal: 377
Unsigned value: 150
Just print the percentage sign %
