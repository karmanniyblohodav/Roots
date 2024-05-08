#include "BruteForceMethod.h"

double BruteForceMethod::GetValue(double leftBound, double rightBound, const double step, const std::function<double(const double)>& func) const {

    Solver::GetValue(leftBound, rightBound, step, func);

    double minDifference = std::abs(func(leftBound));
    double root = leftBound;

    while (leftBound <= rightBound) {
        
        auto y = func(leftBound);

        if (std::abs(y) < minDifference) {
            minDifference = std::abs(y);
            root = leftBound;
        }

        leftBound += step;
    }

    return root;
}
