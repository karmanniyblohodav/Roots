#pragma once
#include <functional>
using namespace std;

class BruteForceMethod
{
public:

	double GetValue(double leftBound, double rightBound, const double step, const function<double(const double)>& func) const;

};

