#include <iostream>
#include <cmath>
using namespace std; 
#define f(x) (1 / (1 + pow(x, 2)))

int main() {
    float lower, upper, integration = 0.0, stepSize, k;
    int subInterval;

    cout << "Enter lower limit of integration: ";
    cin >> lower;
    cout << "Enter upper limit of integration: ";
    cin >> upper;
    cout << "Enter number of sub intervals (must be a multiple of 3): ";
    cin >> subInterval;

    stepSize = (upper - lower) / subInterval;
    integration = f(lower) + f(upper);

    for (int i = 1; i <= subInterval - 1; i++) {
        k = lower + i * stepSize;
        integration += (i % 3 == 0) ? 2 * f(k) : 3 * f(k);
    }

    integration = integration * 3.0 * stepSize / 8.0;

    cout << "\nRequired value of integration is: " << integration << endl;

    return 0;
}
