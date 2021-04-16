#include "unity.h"
#include <calcheader.h>


#include <calcheader.h>
#define PROJECT_NAME    "Calculator"


void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_factorial(void);
void test_power(void);


void setUp(){}

void tearDown(){}


int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_factorial);
  RUN_TEST(test_power);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(60, add(30, 30));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(5000, add(2000, 3000));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-4, subtract(0, 4));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(6000, subtract(10000, 4000));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(9, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(7, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3, divide(6, 2));
}

void test_factorial(void) {
  TEST_ASSERT_EQUAL(24, factorial(4));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, factorial(1));
}

void test_power(void) {
  TEST_ASSERT_EQUAL(9, power(3, 2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(4, power(4, 1));
}
