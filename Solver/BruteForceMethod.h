#pragma once
#include <functional>
#include "Solver.h"

/**
* @brief Реализация метода поиска корней методом перебора.
*/
class BruteForceMethod : public Solver
{
public:

	/**
	* @brief Поиск значения функции, близкого к нулю, методом перебора
	* @param leftBound Левая граница поиска.
	* @param rightBound Правая граница поиска.
	* @param step Шаг численного расчета.
	* @param func Функция, для которой ищется значение.
	* @return Значение аргумента, при котором функция принимает значение, близкое к нулю.
	*/
	double GetValue(double leftBound, double rightBound, const double step, const std::function<double(const double)>& func) const;

};

