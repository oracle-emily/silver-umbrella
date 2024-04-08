//给你一个按照非递减顺序排列的整数数组 nums，和一个目标值 target。请你找出给定目标值在数组中的开始位置和结束位置。

//如果数组中不存在目标值 target，返回[-1, -1]。

//你必须设计并实现时间复杂度为 O(log n) 的算法解决此问题。

#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//
//int Funcheak(int* nums, int numsize, int trage)
//{
//	int left = 0;
//	int right = numsize - 1;
//	int mid = left + (right - 1 + left) / 2;
//	while()
//}



//#include <iostream>
//
//int main() {
//    double sum = 0.0;
//    for (int i = 1; i <= 10; ++i) {
//        if (i % 2 == 1) {
//            
//            sum += 1.0 / i;
//        }
//        else {
//            
//            sum -= 1.0 / i;
//        }
//    }
//
//    std::cout << "Sum of the series: " << sum << std::endl;
//
//    return 0;
//}
//
//
//
//
//
//
#include <iostream>
#include <vector>
#include <algorithm> 
int main() {
    int N;
    std::cin >> N; 

    std::vector<int> numbers(N); 

    for (int i = 0; i < N; ++i) {
        std::cin >> numbers[i];
    }

    auto max_iter = std::max_element(numbers.begin(), numbers.end());

    std::cout << "最大值: " << *max_iter << std::endl;

    return 0;
}



//#include <iostream>
//#include <cmath>
//double f(double x) {
//    return pow(x, 3) + 4 * pow(x, 2) - 10;
//}
//double f_prime(double x) {
//    return 3 * pow(x, 2) + 8 * x;
//}
//double newton_raphson(double x0, double tolerance, int max_iterations) {
//    double x = x0;
//    for (int i = 0; i < max_iterations; ++i) {
//        double fx = f(x);
//        double fpx = f_prime(x);
//        double x_next = x - fx / fpx;
//        if (fabs(x_next - x) < tolerance) {
//            std::cout << "Converged to solution after " << i + 1 << " iterations." << std::endl;
//            return x_next;
//        }
//        x = x_next;
//    }
//    std::cerr << "Failed to converge to a solution after " << max_iterations << " iterations." << std::endl;
//    return NAN; 
//}
//int main() {
//    double x0 = 1.5;
//    double tolerance = 1e-6;
//    int max_iterations = 1000;
//
//    double root = newton_raphson(x0, tolerance, max_iterations);
//    if (!isnan(root)) {
//        std::cout << "Approximate root: " << root << std::endl;
//    }
//
//    return 0;
//}