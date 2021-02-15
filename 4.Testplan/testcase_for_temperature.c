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
  RUN_TEST(test_temperature_conversion);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_temperature_conversion(void) {
  TEST_ASSERT_EQUAL(1738525559, temperature_conversion(965847515));
  TEST_ASSERT_EQUAL("range out of bound", temperature_conversion(965847515));
}
