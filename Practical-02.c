//Question 01

#include <stdio.h>

int main() {
    int Age;

    printf("HI, HOW OLD ARE YOU? ");
    scanf("%d", &Age);

    printf("\n\n");

    printf("WELCOME %d\n", Age);
    printf("LET’S BE FRIENDS!\n");

    return 0;
}


//Question 02

#include <stdio.h>

int main() {
    printf("%5d%5d%5d\n", 2, 4, 8);
    printf("%5d%5d%5d\n", 3, 9, 27);
    printf("%5d%5d%5d\n", 4, 16, 64);
    printf("%5d%5d%5d\n", 5, 25, 125);

    return 0;
}


//Question 03

#include <stdio.h>

int main() {
    float Time, Dis, Avg;

    printf("Enter Time: ");
    scanf("%f", &Time);

    printf("Enter Distance: ");
    scanf("%f", &Dis);

    Avg = Dis / Time;

    printf("Average Speed is %.2f\n", Avg);

    return 0;
}

    > We can’t use int and ﬂoat in mix.


//Question 04

#include <stdio.h>

int main() {
    float Far, Cel;

    printf("Enter Fahrenheit Value: ");
    scanf("%f", &Far);

    Cel = (5.0 / 9.0) * (Far - 32);

    printf("Fahrenheit %.2f equals %.2f Celsius\n", Far, Cel);

    return 0;
}
