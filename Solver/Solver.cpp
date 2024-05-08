#include "Solver.h"
#include <stdexcept>

Solver::~Solver() {}

double Solver::GetValue(double leftBound, double rightBound, const double step, const std::function<double(const double)>& func) const
{
	if (leftBound >= rightBound) {
		throw std::logic_error("октп;лу");
	}

	if (step <= 0.0) {
		throw std::logic_error("dlkfjbn");
	}
	return 0.0;
}