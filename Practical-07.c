#include<stdio.h>

int main() {
     
    int matrix1[3][3];
    int matrix2[3][3];
    int sum[3][3]; 

    
    printf("\t In First Matrix \n\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf("Enter Value For First Matrix %d %d: ", r, c);
            scanf("%d", &matrix1[r][c]);
        }
        printf("\n");
    }

    
    printf("\t In Second Matrix \n\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf("Enter Value For Second Matrix %d %d: ", r, c);
            scanf("%d", &matrix2[r][c]);
        }
        printf("\n");
    }
    
    
    printf("\n\nYour Answer is: \n\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            sum[r][c] = matrix1[r][c] + matrix2[r][c];
            printf(" %d ", sum[r][c]);
        }
        printf("\n\n");
    }
    
    return 0;
}
