#include "DichotomyMethod.h"

double DichotomyMethod::GetValue(double leftBound, double rightBound, const double epsilon, const function<double(const double)>& func) const {

	double middleInterval;

	while (rightBound - leftBound > epsilon) {

		middleInterval = (leftBound + rightBound) / 2.0;

		if (func(middleInterval) == 0)
			return middleInterval;

		else if (func(leftBound) * func(middleInterval) < 0)
			rightBound = middleInterval;

		else
			leftBound = middleInterval;
	}

	return (leftBound + rightBound) / 2.0;
}