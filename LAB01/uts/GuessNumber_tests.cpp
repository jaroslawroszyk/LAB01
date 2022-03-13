#include <gtest/gtest.h>
#include "GuessNumber.h"

using namespace Task3;

class GuessNumberTests : public ::testing::Test
{
protected:

    GuessNumberTests() { };

    ~GuessNumberTests() override { };
};

TEST_F(GuessNumberTests, isEven)
{
    Guess sut;
    EXPECT_TRUE(sut.isEven(2));
    EXPECT_FALSE(sut.isEven(3));
}
