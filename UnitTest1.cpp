#include "pch.h"
#include "CppUnitTest.h"
#include "F:\Users\Юра\source\repos\lb 3.2\lb 3.2\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{

    TEST_CLASS(solve_Tests) {       //тестування функції solve
public:
    TEST_METHOD(solve_get3and4_416returned) {
        double x = 3;
        double n = 4;
        int expected = 4.16;

        int actual = solve(x, n);

        Assert::AreEqual(expected, actual);
    }
public:
    TEST_METHOD(solve_get2and2_15returned) {
        double x = 2;
        double n = 2;
        double expected = 1.5;

        double actual = solve(x, n);

        Assert::AreEqual(expected, actual);
    }
public:
    TEST_METHOD(solve_get6and8_13returned) {
        double x = 6;
        double n = 8;
        int expected = 13;

        int actual = solve(x, n);

        Assert::AreEqual(expected, actual);
    }
public:
    TEST_METHOD(solve_get6and7_13returned) {
        double x = 6;
        double n = 7;
        int expected = 12.9;

        int actual = solve(x, n);

        Assert::AreEqual(expected, actual);
    }
public:
    TEST_METHOD(solve_get7and4_125returned) {
        double x = 7;
        double n = 4;
        int expected = 12.5;

        int actual = solve(x, n);

        Assert::AreEqual(expected, actual);
    }
    };
    TEST_CLASS(checkValidInput_Tests) {
public:
    TEST_METHOD(checkValidInput_get3and4_exceptionNotThrown) {  //тестування функції checkValidInput
        double x = 3;
        double n = 4;

        try {
            checkValidInput();
            Assert::IsTrue(true);
        }
        catch (...) {
            Assert::Fail();
        }
    }
    };
}


/*namespace UnitTest1
{

    TEST_CLASS(solve_Tests) {
public:
    TEST_METHOD(solve_get3and4_416returned) {
        double x = 3;
        double n = 4;
        int expected = 1;

        int actual = solve(x, n);

        Assert::AreEqual(expected, actual);
    }
public:
    TEST_METHOD(solve_get2and2_15returned) {
        double x = 2;
        double n = 2;
        double expected = 1.5;

        double actual = solve(x, n);

        Assert::AreEqual(expected, actual);
    }
public:
    TEST_METHOD(solve_get6and8_13returned) {
        double x = 6;
        double n = 8;
        int expected = -34;

        int actual = solve(x, n);

        Assert::AreEqual(expected, actual);
    }
public:
    TEST_METHOD(solve_get6and7_13returned) {
        double x = 6;
        double n = 7;
        int expected = 12.9;

        int actual = solve(x, n);

        Assert::AreEqual(expected, actual);
    }
public:
    TEST_METHOD(solve_get7and4_125returned) {
        double x = 7;
        double n = 4;
        int expected = 12.5;

        int actual = solve(x, n);

        Assert::AreEqual(expected, actual);
    }
    };
    TEST_CLASS(checkValidInput_Tests) {
public:
    TEST_METHOD(checkValidInput_get3and4_exceptionNotThrown) {
        double x = 3;
        double n = 4;

        try {
            checkValidInput();
            Assert::Fail();
        }
        catch (...) {
            Assert::IsTrue(true);
        }
    }
    };
}*/