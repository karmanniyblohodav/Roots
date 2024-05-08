#include <iostream>
#include <cmath>
#include <C:\Учеб\ТКИ-141-2\Roots\Solver\DichotomyMethod.h>
#include <C:\Учеб\ТКИ-141-2\Roots\Solver\BruteForceMethod.h>
#include <C:\Учеб\ТКИ-141-2\Roots\Solver\Solver.h>
using namespace std;

int main() {
	
	auto func = [](const double x) { return x*x-4;  };
	auto leftBound = 0;
	auto rightBound = 10;
	auto step = 1;
	auto epsilon = 0.000001;
	auto root1 = new DichotomyMethod();
	auto root2 = new BruteForceMethod();

	cout << root1->GetValue(leftBound, rightBound, step, epsilon, func) << endl;
	cout << root2->GetValue(leftBound, rightBound, step, func) << endl;
	
	return 0;
}