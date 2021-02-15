#include "unity.h"
#include <calculator_operations.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_triangle(void);
void test_triangle_testcase2(void);
void test_square(void);
void test_rectangle(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_triangle(void) {
  TEST_ASSERT_EQUAL(100, triangle(10, 20));
  TEST_ASSERT_EQUAL("Area cant be negative", triangle(10, -20));
}
void test_triangle_testcase2(void) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL("Input cant be Zero", add(0, 7500));
}

void test_square(void) {
  TEST_ASSERT_EQUAL("Input cant be Zero", square(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL("area cant be negative", square(10, -900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(2, multiply(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3, divide(2, 2));
}
