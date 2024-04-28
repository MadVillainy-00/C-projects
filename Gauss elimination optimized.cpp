#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter number of unknowns: ";
    cin >> n;

    vector<vector<double>> a(n, vector<double>(n + 1));

    cout << "Enter Coefficients of Augmented Matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            cout << "a[" << i + 1 << "][" << j + 1 << "]= ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i][i] == 0.0) {
            cout << "Mathematical Error: Division by zero!";
            return 1;
        }
        for (int j = i + 1; j < n; j++) {
            double ratio = a[j][i] / a[i][i];
            for (int k = 0; k <= n; k++) {
                a[j][k] -= ratio * a[i][k];
            }
        }
    }

    vector<double> x(n);
    for (int i = n - 1; i >= 0; i--) {
        x[i] = a[i][n];
        for (int j = i + 1; j < n; j++) {
            x[i] -= a[i][j] * x[j];
        }
        x[i] /= a[i][i];
    }

    cout << endl << "Solution: " << endl;
    cout << setprecision(3) << fixed;
    for (int i = 0; i < n; i++) {
        cout << "x[" << i + 1 << "] = " << x[i] << endl;
    }

    return 0;
}
