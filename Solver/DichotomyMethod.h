#pragma once
#include <functional>
#include "Solver.h"

/**
* @brief Реализация метода поиска корней методом дихотомии.
*/
class DichotomyMethod : public Solver
{
public:

	/**
	* @brief Поиск значения функции, близкого к нулю, методом дихотомии.
	* @param leftBound Левая граница поиска.
	* @param rightBound Правая граница поиска.
	* @param step Шаг численного расчета.
	* @param epsilon Точность вычислений.
	* @param func Функция, для которой ищется значение.
	* @return Значение аргумента, при котором функция принимает значение, близкое к нулю.
	*/
	double GetValue(double leftBound, double rightBound, const double step, const double epsilon, const std::function<double(const double)>& func) const;

};

