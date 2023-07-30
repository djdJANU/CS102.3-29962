//Question 01

#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array (maximum 10): ");
    scanf("%d", &size);

    if (size <= 0 || size > 10) {
        printf("Invalid size. Please enter a size between 1 and 10.\n");
        return 1;
    }

    int arr[size];
    int i, sum = 0, min, max;


    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];


        if (i == 0) {
            min = max = arr[i];
        } else {
            if (arr[i] < min) {
                min = arr[i];
            }
            if (arr[i] > max) {
                max = arr[i];
            }
        }
    }


    float average = (float)sum / size;

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", average);

    printf("Values in reverse order:\n");
    for (i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


//Question 02

#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size. Please enter a positive size.\n");
        return 1;
    }

    int arr1[size], arr2[size], scalarSum = 0;
    int vectorSum[size], i;

    printf("Enter %d integers for the first array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
        scalarSum += arr1[i];
    }

    printf("Enter %d integers for the second array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
        scalarSum += arr2[i];
    }

    
    printf("Vector Sum (third array):\n");
    for (i = 0; i < size; i++) {
        vectorSum[i] = arr1[i] + arr2[i];
        printf("%d ", vectorSum[i]);
    }
    printf("\n");

    
    printf("Scalar Sum: %d\n", scalarSum);

    return 0;
}
