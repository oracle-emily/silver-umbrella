#include <iostream>
#include <cmath>
double f(double x) {
    return pow(x, 3) + 4 * pow(x, 2) - 10;
}
double f_prime(double x) {
    return 3 * pow(x, 2) + 8 * x;
}

double newton_raphson(double x0, double tolerance, int max_iterations) 
{
    double x = x0;
    for (int i = 0; i < max_iterations; ++i) {
        double fx = f(x);
        double fpx = f_prime(x);
        double x_next = x - fx / fpx;

        if (fabs(x_next - x) < tolerance) {
            std::cout << "Converged to solution after " << i + 1 << " iterations." << std::endl;
            return x_next;
        }

        x = x_next;
    }

    std::cerr << "Failed to converge to a solution after " << max_iterations << " iterations." << std::endl;
    return NAN;
}
int main() 
{
    double x0 = 1.5;
    double tolerance = 1e-6;
    int max_iterations = 1000;

    double root = newton_raphson(x0, tolerance, max_iterations);
    if (!isnan(root)) {
        std::cout << "Approximate root: " << root << std::endl;
    }

    return 0;
}