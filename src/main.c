# include "perceptron/perceptron.h"

int main (int argc, char *argv[])
{
    Perceptron p;
    int num_inputs;

    if (argc == 2) {
        num_inputs = atoi(argv[1]);
    } else {
        fprintf(stderr, "Usage: %s <num_inputs>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    /* Optional: seed RNG for weight initialization */
    srand((unsigned int)time(NULL));

    double *example[] = {
        (double []){1, 2, 3},
        (double []){4, 5, 6},
        (double []){7, 8, 9}
    };

    print_matrix(example, 3, 3);

    initialize_perceptron(&p, num_inputs);
    free_perceptron(&p);
    return 0;
}
