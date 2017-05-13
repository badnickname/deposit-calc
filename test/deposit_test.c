#include <deposit.h>
#include <ctest.h>

CTEST(vklad, test0) {
    const int input = 9;
    const int result = isVkladCorrect(input);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(vklad, test1) {
    const int input = 10;
    const int result = isVkladCorrect(input);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(vklad, test2) {
    const int input = 11;
    const int result = isVkladCorrect(input);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(srok, test0) {
    const int input = -1;
    const int result = isSrokCorrect(input);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(srok, test1) {
    const int input = 0;
    const int result = isSrokCorrect(input);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(srok, test2) {
    const int input = 365;
    const int result = isSrokCorrect(input);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(srok, test3) {
    const int input = 366;
    const int result = isSrokCorrect(input);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(count, test0) {
    const double vklad = 100;
    const double srok = 0;
    const double result = countDohod(vklad, srok);
    const double expected = 90;
    ASSERT_EQUAL(expected, result);
}

CTEST(count, test1) {
    const double vklad = 100;
    const double srok = 31;
    const double result = countDohod(vklad, srok);
    const double expected = 102;
    const double tol = 0.5;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}

CTEST(count, test2) {
    const double vklad = 101.102;
    const double srok = 31;
    const double result = countDohod(vklad, srok);
    const double expected = 104.135;
    const double tol = 0.5;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}

CTEST(count, test3) {
    const double vklad = 101.1;
    const double srok = 121;
    const double result = countDohod(vklad, srok);
    const double expected = 109.188;
    const double tol = 0.5;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}

CTEST(count, test4) {
    const double vklad = 101.1;
    const double srok = 241;
    const double result = countDohod(vklad, srok);
    const double expected = 116.265;
    const double tol = 0.5;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}

CTEST(count, test5) {
    const double vklad = 99.9;
    const double srok = 31;
    const double result = countDohod(vklad, srok);
    const double expected = 101.898;
    const double tol = 0.5;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}

CTEST(count, test6) {
    const double vklad = 99.9;
    const double srok = 121;
    const double result = countDohod(vklad, srok);
    const double expected = 105.894;
    const double tol = 0.5;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}

CTEST(count, test7) {
    const double vklad = 99.9;
    const double srok = 241;
    const double result = countDohod(vklad, srok);
    const double expected = 111.888;
    const double tol = 0.5;
    ASSERT_DBL_NEAR_TOL(expected, result, tol);
}
