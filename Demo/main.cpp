#include <iostream>
#include <cmath>
#include <exception>
#include "..\Solver\DichotomyMethod.h"
#include "..\Solver\BruteForceMethod.h"
#include "..\Solver\Solver.h"
using namespace std;

/**
* @brief Точка входа в программу
* @return 0 в случае успеха
*/
int main() {
    auto func = [](const double x) { return x * x - 4; };
    double leftBound = 0;
    double rightBound = -10;
    double step = 1;
    double epsilon = 0.000001;
    auto root1 = new DichotomyMethod();
    auto root2 = new BruteForceMethod();

    try {
        cout << root1->GetValue(leftBound, rightBound, step, epsilon, func) << endl;
        cout << root2->GetValue(leftBound, rightBound, step, func) << endl;
    }
    catch (const std::logic_error& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
