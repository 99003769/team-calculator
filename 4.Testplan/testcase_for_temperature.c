#include "unity.h"
#include <calculator_operations.h>
#include<calculator_temperature_conversion.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

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
void test_temperature_conversionc_to_f(void) {
  TEST_ASSERT_EQUAL(1738525559, temperature_conversion_c_to_f(965847515));
  TEST_ASSERT_EQUAL("range out of bound", temperature_conversion_c_to_f(965847515));
}
/* Write all the test functions */ 
void test_temperature_conversion_f_to_c(void) {
  TEST_ASSERT_EQUAL(5485840347.7787, temperature_conversion_f_to_c(9874512658));
  TEST_ASSERT_EQUAL("range out of bound", temperature_conversion_f_to_c(9874512658));
}

