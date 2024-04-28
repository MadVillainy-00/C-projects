#include <iostream>
#include <iomanip>

#define SIZE 10

using namespace std;

int main()
{
    double a[SIZE][SIZE], x[SIZE], ratio;
    int i, j, k, n;

    cout << "Enter number of unknowns: ";
    cin >> n;

    cout << "Enter Coefficients of Augmented Matrix: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n + 1; j++)
        {
            cout << "a[" << i + 1 << "][" << j + 1 << "]= ";
            cin >> a[i][j];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (a[i][i] == 0.0)
        {
            cout << "Mathematical Error: Division by zero!";
            return 1;
        }
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                ratio = a[j][i] / a[i][i];
                for (k = 0; k < n + 1; k++)
                {
                    a[j][k] = a[j][k] - ratio * a[i][k];
                }
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        x[i] = a[i][n] / a[i][i];
    }

    cout << endl << "Solution: " << endl;
    cout << setprecision(3) << fixed;
    for (i = 0; i < n; i++)
    {
        cout << "x[" << i + 1 << "] = " << x[i] << endl;
    }

    return 0;
}
