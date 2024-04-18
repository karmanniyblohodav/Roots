#include <iostream>
#include <cmath>
#include <C:\Учеб\ТКИ-141-2\Roots\Solver\DichotomyMethod.h>
#include <C:\Учеб\ТКИ-141-2\Roots\Solver\BruteForceMethod.h>
using namespace std;

int main() {
	
	auto func = [](const double x) { return x*x*x-7*x;  };
	auto leftBound = -10.0;
	auto rightBound = 10.0;
	auto step = 0.0001;
	auto epsilon = 0.000001;
	auto root1 = new DichotomyMethod();
	auto root2 = new BruteForceMethod();

	cout << root1->GetValue(leftBound, rightBound, epsilon, func) << endl;
	cout << root2->GetValue(leftBound, rightBound, step, func) << endl;

	return 0;
}