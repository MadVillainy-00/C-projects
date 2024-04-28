#include <iostream>
#include <cmath>

#define SIZE 3

using namespace std;

void jacobi(double A[SIZE][SIZE], double B[SIZE], double X[SIZE], int max_iter, double tolerance) {
    double X_new[SIZE];
    int iter = 0;

    while (iter < max_iter) {
        for (int i = 0; i < SIZE; i++) {
            double sum = 0.0;
            for (int j = 0; j < SIZE; j++) {
                if (i != j) {
                    sum += A[i][j] * X[j];
                }
            }
            X_new[i] = (B[i] - sum) / A[i][i];
        }

        double max_diff = 0.0;
        for (int i = 0; i < SIZE; i++) {
            double diff = fabs(X_new[i] - X[i]);
            if (diff > max_diff) {
                max_diff = diff;
            }
            X[i] = X_new[i];
        }

        if (max_diff < tolerance) {
            break;
        }

        iter++;
    }
}

int main() {
    double A[SIZE][SIZE] = {{10, -1, 2},
                             {-1, 11, -1},
                             {2, -1, 10}};
    double B[SIZE] = {6, 25, -11};
    double X[SIZE] = {0, 0, 0};
    int max_iter = 100;
    double tolerance = 1e-6;

    jacobi(A, B, X, max_iter, tolerance);

    cout << "Solution:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "X[" << i << "] = " << X[i] << endl;
    }

    return 0;
}
