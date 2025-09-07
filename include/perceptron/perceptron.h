#ifndef PERCEPTRON_H
# define PERCEPTRON_H


# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
#include <time.h>

# define LEARNING_RATE 0.1
# define EPOCHS 1000

typedef struct {
    double *weights;
    int num_inputs;
} Perceptron;

void    print_matrix(double **matrix, int rows, int cols);
double  dot_product(double v[], double u[], int n);
void    initialize_perceptron(Perceptron *p, int num_inputs);
void    free_perceptron(Perceptron *p);

#endif

