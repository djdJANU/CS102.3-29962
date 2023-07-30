//Question 01

        //Part 01

#include <stdio.h>

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}

        //Part 02

#include <stdio.h>

int main() {
    int num, num1;

    printf("Enter the number: ");
    scanf("%d", &num);

    num1 = (num % 2) + 1;

    switch (num1) {
        case 1:
            printf("%d is even\n", num);
            break;
        case 2:
            printf("%d is odd\n", num);
            break;
    }

    return 0;
}


//Question 02

#include <stdio.h>

int main() {
    int operator;

    printf("These are the Arithmetic operators:\n");
    printf("1. Addition [+]\t\t2. Subtraction [-]\n");
    printf("3. Multiplication [*]\t4. Division [/]\n\n");

    printf("Please enter the number of the operator you want: ");
    scanf("%d", &operator);

    switch (operator) {
        case 1:
            printf("You selected: Addition [+]\n");
            break;
        case 2:
            printf("You selected: Subtraction [-]\n");
            break;
        case 3:
            printf("You selected: Multiplication [*]\n");
            break;
        default:
            printf("You selected: Division [/]\n");
            break;
    }

    return 0;
}


//Question 03

#include <stdio.h>

float PI = 3.14159;

int main() {
    float r, circumf, vol, area;

    printf("Enter The Radius: ");
    scanf("%f", &r);

    circumf = 2 * PI * r;
    vol = 4 / 3 * PI * r * r * r;
    area = PI * r * r;

    printf("%f circumferense of the circle\n\n", circumf);
    printf("%f volume of the sphere\n\n", vol);
    printf("%f area of the circle\n", area);

    return 0;
}


//Question 04

#include <stdio.h>

int main() {
    char ch;

    // Read character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    ch = toupper(ch);

    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is not a vowel.\n", ch);
            break;
    }

    return 0;
}


//Question 05

#include <stdio.h>

int main() {
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    
    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            printf("Total number of days: 31\n");
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            printf("Total number of days: 30\n");
            break;
        case 2:  // February
            printf("Total number of days: 28\n");
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
            break;
    }

    return 0;
}

