#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite, ExpectZeroForEmptyInput)
{
  string input = "";
  int expectedValue = 0;

  int actualValue = add(input);
  ASSERT_EQ(actualValue, expectedValue);
}

TEST(StringCalculatorTestSuite, ExpectZeroForCharacters)
{
  string input = "gokul";
  int expectedValue = 0;

  int actualValue = add(input);
  ASSERT_EQ(actualValue, expectedValue);
}

TEST(StringCalculatorTestSuite, ExpectSumForTwoNumbers)
{
  string input = "1,2,3";
  int expectedValue = 6;

  int actualValue = add(input);
  ASSERT_EQ(actualValue, expectedValue);
}
