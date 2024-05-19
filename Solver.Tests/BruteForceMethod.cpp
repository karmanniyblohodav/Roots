#include "CppUnitTest.h"
#include "..\Solver\BruteForceMethod.h"
#include <functional>
#include <stdexcept>
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SolverTests
{
    TEST_CLASS(BruteForceMethodTests)
    {
    public:

        TEST_METHOD(TestRootFindingForQuadratic)
        {
            auto func = [](const double x) { return x * x - 4; }; // Roots: -2 and 2
            double leftBound = 0;
            double rightBound = 3;
            double step = 0.01;

            BruteForceMethod solver;
            double result = solver.GetValue(leftBound, rightBound, step, func);

            // Verify if result is close to 2 (considering small numerical inaccuracies)
            Assert::IsTrue(std::abs(result - 2) < 0.01);
        }

        TEST_METHOD(TestExceptionForInvalidBounds)
        {
            auto func = [](const double x) { return x * x - 4; };
            double leftBound = 3;
            double rightBound = 0;
            double step = 0.01;

            BruteForceMethod solver;

            // Verify if exception is thrown for invalid bounds
            auto funcToTest = [&]() { solver.GetValue(leftBound, rightBound, step, func); };
            Assert::ExpectException<std::logic_error>(funcToTest);
        }

        TEST_METHOD(TestExceptionForInvalidStep)
        {
            auto func = [](const double x) { return x * x - 4; };
            double leftBound = 0;
            double rightBound = 3;
            double step = -0.01;

            BruteForceMethod solver;

            // Verify if exception is thrown for invalid step
            auto funcToTest = [&]() { solver.GetValue(leftBound, rightBound, step, func); };
            Assert::ExpectException<std::logic_error>(funcToTest);
        }
    };
}
