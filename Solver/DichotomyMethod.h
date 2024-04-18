#pragma once
#include <functional>
#include <cmath>
using namespace std;

class DichotomyMethod
{
public:

	double GetValue(double leftBound, double rightBound, const double epsilon, const function<double(const double)>& func) const;

};

