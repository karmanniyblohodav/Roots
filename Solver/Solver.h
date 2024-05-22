#pragma once
#include <functional>

/**
 * @brief Базовый класс для методов поиска корней функций.
 */
class Solver {

protected:
    /**
     * @brief Конструктор по умолчанию, защищенный, чтобы предотвратить создание экземпляров базового класса.
     */
    Solver() = default;

public:
    /**
     * @brief Виртуальный деструктор.
     */
    virtual ~Solver() = 0;

    /**
     * @brief Виртуальный метод для поиска значения функции, близкого к нулю.
     * @param leftBound Левая граница поиска.
     * @param rightBound Правая граница поиска.
     * @param step Шаг численного расчета.
     * @param func Функция, для которой ищется значение, близкое к нулю.
     * @return Виртуальный метод не возвращает значения, реализация в базовом классе всегда возвращает 0.
     */
    virtual double GetValue(double leftBound, double rightBound, const double step, const std::function<double(const double)>& func) const;
};