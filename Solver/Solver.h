#pragma once
#include <functional>

class Solver {

protected:
	Solver() = default;

public:
	virtual ~Solver() = 0;

	virtual double GetValue(double leftBound, double rightBound, const double step, const std::function<double(const double)>& func) const;

};
	