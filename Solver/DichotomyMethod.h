#pragma once
#include <functional>
#include "Solver.h"

class DichotomyMethod : public Solver
{
public:

	double GetValue(double leftBound, double rightBound, const double step, const double epsilon, const std::function<double(const double)>& func) const;

};

