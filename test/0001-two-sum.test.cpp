#include <gtest/gtest.h>
#include <vector>
#include "../src/0001-two-sum.h"

TEST(two_sum, example)
{
    const auto numbers  = std::vector<int>{2, 7, 11, 15};
    const auto result   = twoSum(numbers, 9);
    const auto expected = std::vector<int>{0, 1};
    ASSERT_EQ(result, expected);
}

TEST(two_sum, example_2)
{
    const auto numbers  = std::vector<int>{3, 2, 4};
    const auto result   = twoSum(numbers, 6);
    const auto expected = std::vector<int>{1, 2};
    ASSERT_EQ(result, expected);
}
