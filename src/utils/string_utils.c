# include "perceptron/perceptron.h"

void print_matrix(double **matrix, int rows, int cols)
{
    printf("      ");
    for (int j = 0; j < cols; j++) {
        printf("   [%d]   ", j);
    }
    printf("\n");

    printf("    ┌");
    for (int j = 0; j < cols; j++) {
        printf("──────────");
        if (j < cols - 1) printf("┬");
    }
    printf("┐\n");

    for (int i = 0; i < rows; i++) {
        printf("[%d] │", i);
        for (int j = 0; j < cols; j++) {
            printf(" %8.3f ", matrix[i][j]);
            if (j < cols - 1) printf("│");
        }
        printf("│\n");
        if (i < rows - 1) {
            printf("    ├");
            for (int j = 0; j < cols; j++) {
                printf("──────────");
                if (j < cols - 1) printf("┼");
            }
            printf("┤\n");
        }
    }

    printf("    └");
    for (int j = 0; j < cols; j++) {
        printf("──────────");
        if (j < cols - 1) printf("┴");
    }
    printf("┘\n");
}
