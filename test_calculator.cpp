#include "UnitCpp.h"
#include "calculator.hpp"
#include <stdexcept>

TEST_CASE("Operaciones de la calculadora")
{
    Calculator calc;

    TEST("Suma")
    {
        CHECK_EQUAL(calc.add(2, 2), 4);
        CHECK_EQUAL(calc.add(-1, 1), 0);
        CHECK_CLOSE(calc.add(0.1, 0.2), 0.3, 0.0001);
    }

    TEST("Resta")
    {
        CHECK_EQUAL(calc.subtract(5, 3), 2);
        CHECK_EQUAL(calc.subtract(1, 1), 0);
        CHECK_EQUAL(calc.subtract(-1, -1), 0);
    }

    TEST("Multiplicación")
    {
        CHECK_EQUAL(calc.multiply(3, 4), 12);
        CHECK_EQUAL(calc.multiply(-2, 3), -6);
        CHECK_EQUAL(calc.multiply(0, 5), 0);
    }

    TEST("División")
    {
        CHECK_EQUAL(calc.divide(6, 2), 3);
        CHECK_EQUAL(calc.divide(-6, 2), -3);
        CHECK_EQUAL(calc.divide(0, 5), 0);
        CHECK_THROW(calc.divide(1, 0), std::invalid_argument);
    }
}

TEST_MAIN()