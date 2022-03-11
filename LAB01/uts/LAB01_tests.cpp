#include <gtest/gtest.h>
#include "LAB01.h"

class LabTests : public ::testing::Test
{
protected:
    LabTests()
    { };

    ~LabTests() override
    { };
};

TEST_F(LabTests,checkIsEven)
{
    Separate sut;
    EXPECT_TRUE(sut.isEven(2));
}