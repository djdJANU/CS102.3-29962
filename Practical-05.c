//Section A
//Question 01

//While loop

#include <stdio.h>

int main() {
    int x = 1;
    while (x <= 100) {
        printf("%d \n", x);
        x = x + 1;
    }
    return 0;
}

//Do-While Loop

#include <stdio.h>

int main() {
    int num = 0;

    printf("Numbers from 0 to 100:\n");
    do {
        printf("%d ", num);
        num++;
    } while (num <= 100);

    return 0;
}


//For Loop

#include <stdio.h>

int main() {
    int z;
    for (z = 1; z <= 100; z += 1) {
        printf("%d \n", z);
    }
    return 0;
}


//Question 02

#include <stdio.h>

int main() {
    int x = 1, total = 0, avg, mark;

    while (x <= 10) {
        printf("Enter the Mark %d: ", x);
        scanf("%d", &mark);
        total = total + mark;
        x = x + 1;
    }

    avg = total / 10;

    printf("\n\nTotal Marks is >>> %d\n", total);

    printf("Average is ");
    if (avg < 50) {
        printf("Fail!\n");
    } else {
        printf("Pass!\n");
    }

    return 0;
}


//Question 03

#include <stdio.h>

int main() {
    int num1, total = 2;

    printf("Enter the Number: ");
    scanf("%d", &num1);

    if (num1 == 0 || num1 == 1) {
        printf("\nFactorial Value is >>> 1");
    } else {
        for (num1; num1 > 2; num1--) {
            total = total * num1;
        }
        printf("\nFactorial Value is >>> %d", total);
    }

    return 0;
}


//Question 04

#include <stdio.h>

int main() {
    int num1, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num1);

    while (num1 > 0) {
        digit = num1 % 10;
        sum += digit;
        num1 /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}


//Question 05

#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    do {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num = num / 10;
    } while (num != 0);

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}


//Question 06

#include <stdio.h>

int main() {
    int base, power, sum = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the power: ");
    scanf("%d", &power);

    if (base >= 0) {
        for (int i = 1; i <= power; i++) {
            sum *= base;
        }
        printf("%d power of %d is %d\n", base, power, sum);
    } else {
        printf("Non-negative integer.\n");
    }

    return 0;
}


//Question 07

#include <stdio.h>

int main() {
    int n = 10;
    int fib[n];


    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("The first 10 Fibonacci numbers are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}


//Question 08

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if ((int)result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}


//Question 09

#include <stdio.h>

int main() {
    char letter;

    printf("ASCII values for letters A to Z:\n");
    for (letter = 'A'; letter <= 'Z'; letter++) {
        printf("%c: %d\n", letter, letter);
    }

    return 0;
}


//Question 10

#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


//Question 11

#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        flag = 1;
    }

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("%d is a prime number.", n);
    } else {
        printf("%d is not a prime number.", n);
    }

    return 0;
}

//Question 12

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


//Question 13

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter numbers to add (enter -1 to stop):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == -1) {
            break; 
        }

        sum += num;
    }

    printf("Sum of all numbers: %d\n", sum);

    return 0;
}


//Question 14

#include <stdio.h>

int main() {
    int array[10];

    printf("Enter 10 integers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nEntered array elements:\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}


//Question 15

#include <stdio.h>

int main() {
    int array[10]; 
    int evenCount = 0; 

    printf("Enter 10 integers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (array[i] % 2 == 0) {
            evenCount++;
        }
    }

    printf("\nEntered array elements:\n");

    
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Count of even numbers: %d\n", evenCount);

    return 0;
}



//Section B 

//Question 01

#include <stdio.h>

int main() {
    int num, p = 0, n = 0, z = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 1; i <= 10; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num > 0) {
            p++;
        } else if (num < 0) {
            n++;
        } else {
            z++;
        }
    }

    printf("Positive numbers: %d\n", p);
    printf("Negative numbers: %d\n", n);
    printf("Zero numbers: %d\n", z);

    return 0;
}


//Question 02

#include <stdio.h>

int main() {
    int marks, max, min, total;
    float avg;

    for (int i = 0; i < 10; i++) {
        printf("Enter marks: ");
        scanf("%d", &marks);

        if (i == 0) {
            max = marks;
            min = marks;
            total = marks;
        } else {
            if (marks > max) {
                max = marks;
            }
            if (marks < min) {
                min = marks;
            }
            total = total + marks;
        }
    }

    avg = (float)total / 10;

    printf("%.2f is the average of your marks.\n", avg);
    printf("Maximum mark is %d.\n", max);
    printf("Minimum mark is %d.\n", min);
    printf("Total mark is %d.\n", total);

    return 0;
}


//Question 03

#include <stdio.h>

int main() {
    int value, total = 0, avg, count = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter value: ");
        scanf("%d", &value);

        total += value;

        if (value > 200) {
            count++;
        }
    }

    avg = total / 10;

    printf("Average value of an item: %d\n", avg);
    printf("Number of items with greater than 200: %d\n", count);

    return 0;
}


//Question 04

#include <stdio.h>

int main() {
    int empNo, count = 0;
    float basicSalary;

    printf("Enter Employee No and Basic Salary (Enter -999 for Employee No to stop):\n");

    while (1) {
        printf("Employee No: ");
        scanf("%d", &empNo);

        if (empNo == -999) {
            break; 
        }

        printf("Basic Salary: ");
        scanf("%f", &basicSalary);

        if (basicSalary >= 5000) {
            count++;
        }
    }

    printf("Number of Employees with Basic Salary >= 5000: %d\n", count);

    return 0;
}


//Question 05

#include <stdio.h>

int main() {
    int Enumber, hoursworked, overtimepayment, overtimeexeeding4000count = 0, totalemployees = 0;
    int normalrate = 150, overtimerate = 200, maxregularhours = 40, overtimethreshold = 4000;

    printf("Enter employee number (-999 to end): ");
    scanf("%d", &Enumber);

    while (Enumber != -999) {
        printf("Enter the hours worked by employee: ");
        scanf("%d", &hoursworked);

        if (hoursworked <= maxregularhours) {
            overtimepayment = 0;
        } else {
            int overtimehours = hoursworked - maxregularhours;
            overtimepayment = (overtimehours * overtimerate) + (maxregularhours * normalrate);
        }

        printf("Employee number: %d\n", Enumber);
        printf("Overtime Payment: Rs. %d\n", overtimepayment);

        if (overtimepayment > overtimethreshold) {
            overtimeexeeding4000count++;
        }

        totalemployees++;

        printf("\nEnter employee number (-999 to end): ");
        scanf("%d", &Enumber);
    }

    if (totalemployees > 0) {
        double percentageexceeding4000 = (double)overtimeexeeding4000count / totalemployees * 100;
        printf("\nPercentage of employees whose Overtime Payment exceeds Rs. 4000/-: %.2f%%\n", percentageexceeding4000);
    }

    return 0;
}
