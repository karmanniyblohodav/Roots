#include "DichotomyMethod.h"

double DichotomyMethod::GetValue(double leftBound, double rightBound,const double step, const double epsilon, const std::function<double(const double)>&func) const {

	Solver::GetValue(leftBound, rightBound, step, func);

	while (rightBound - leftBound > epsilon) {

		auto middleInterval = (leftBound + rightBound) / 2.0;

		if (std::abs(func(middleInterval)) <= epsilon)
			return middleInterval;

		else if (func(leftBound) * func(middleInterval) < 0)
			rightBound = middleInterval;

		else
			leftBound = middleInterval;
	}

	return (leftBound + rightBound) / 2.0;
}