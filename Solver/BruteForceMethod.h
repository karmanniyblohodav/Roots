#pragma once
#include <functional>
#include "Solver.h"

class BruteForceMethod : public Solver
{
public:

	double GetValue(double leftBound, double rightBound, const double step, const std::function<double(const double)>& func) const;

};

