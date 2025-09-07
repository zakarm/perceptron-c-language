# include "perceptron/perceptron.h"

/* initialize the perceptron */
void initialize_perceptron(Perceptron *p, int num_inputs) {
    p->num_inputs = num_inputs;
    p->weights = (double *)malloc((num_inputs + 1) * sizeof(double));

    for (int i = 0; i <= num_inputs; i++) {
        p->weights[i] = (double)rand() / RAND_MAX - 0.5;
    }
}

/* free weights memory allocated for the perceptron */
void free_perceptron(Perceptron *p) {
    free(p->weights);
    p->weights = NULL;
}
