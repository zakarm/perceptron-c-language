# include "perceptron/perceptron.h"

double dot_product(double v[], double u[], int n)
{
    double dotp = 0.0;
    for (int i = 0; i < n; i++)
        dotp += v[i]*u[i];
    return dotp;
}
