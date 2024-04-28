#include <iostream>
using namespace std; 
#define S 50

int main() {
    int n;
    float x[S], y[S], sumX = 0, sumX2 = 0, sumY = 0, sumXY = 0, a, b;

    cout << "How many data points? ";
    cin >> n;

    cout << "Enter data:" << endl;

    for (int i = 1; i <= n; i++) {
        cout << "x[" << i << "] = ";
        cin >> x[i];
        cout << "y[" << i << "] = ";
        cin >> y[i];
        sumX += x[i];
        sumX2 += x[i] * x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
    }

    b = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    a = (sumY - b * sumX) / n;

    cout << "Calculated value of a is " << a << " and b is " << b << endl;
    cout << "Equation of best fit is: y = " << a << " + " << b << "x" << endl;

    return 0;
}
