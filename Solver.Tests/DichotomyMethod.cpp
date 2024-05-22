#include "CppUnitTest.h"
#include "..\Solver\DichotomyMethod.h"
#include <functional>
#include <stdexcept>
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SolverTests
{
    TEST_CLASS(DichotomyMethodTests)
    {
    public:

        TEST_METHOD(GetValue_ValidData_Success)
        {
            auto func = [](const double x) { return x * x - 4; }; // Roots: -2 and 2
            double leftBound = 0;
            double rightBound = 3;
            double step = 0.01;
            double epsilon = 0.000001;

            DichotomyMethod solver{};
            double result = solver.GetValue(leftBound, rightBound, step, epsilon, func);

            // Verify if result is close to 2 (considering small numerical inaccuracies)
            Assert::IsTrue(std::abs(result - 2) < 0.01);
        }

        TEST_METHOD(GetValue_LeftBoundGreaterRightBound_Exception)
        {
            auto func = [](const double x) { return x * x - 4; };
            double leftBound = 3;
            double rightBound = 0;
            double step = 0.01;
            double epsilon = 0.000001;

            DichotomyMethod solver{};

            // Verify if exception is thrown for invalid bounds
            auto funcToTest = [&]() { solver.GetValue(leftBound, rightBound, step, epsilon, func); };
            Assert::ExpectException<std::logic_error>(funcToTest);
        }

        TEST_METHOD(GetValue_NegativeStep_Exception)
        {
            auto func = [](const double x) { return x * x - 4; };
            double leftBound = 0;
            double rightBound = 3;
            double step = -0.01;
            double epsilon = 0.000001;

            DichotomyMethod solver{};

            // Verify if exception is thrown for invalid step
            auto funcToTest = [&]() { solver.GetValue(leftBound, rightBound, step, epsilon, func); };
            Assert::ExpectException<std::logic_error>(funcToTest);
        }
    };
}