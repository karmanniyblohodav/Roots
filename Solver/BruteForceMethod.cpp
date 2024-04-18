#include "BruteForceMethod.h"
using namespace std;

double BruteForceMethod::GetValue(double leftBound, double rightBound, const double step, const function<double(const double)>& func) const {

    double minDifference = std::numeric_limits<double>::max();
    double root = leftBound;

    while (leftBound <= rightBound) {
        if (fabs(func(leftBound)) < minDifference) {
            minDifference = fabs(func(leftBound));
            root = leftBound;
        }

        leftBound += step;
    }

    

    return root;
}
