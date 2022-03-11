#include <gtest/gtest.h>
#include "LAB01.h"
#include <vector>
#include <utility>

class LabTests : public ::testing::Test
{
protected:
    LabTests() { };

    ~LabTests() override { };
};

/*
 * testuj:
    - swap function dla intów i stringów
    - separateOddEven
    - zad1
    - zad3 - jak?
 */
/*
 * auto Separate::swapArr(T &a, T &b) -> void
{
    T temp = a;
    a = b;
    b = temp;
}
 *
 */

TEST_F(LabTests, separateOddEvenShouldReturnCorrectSeparation)
{
    Separate sut;
    std::vector<int> input {6, 7, 5, 2, 3, 1, 9, 8, 10};
    std::vector<int> output {1, 3, 5, 7, 9, 10, 8, 6, 2};
    EXPECT_EQ(sut.separateOddEven(input), output);
}

TEST_F(LabTests, GivenInputShouldCorrectSeparation)
{
    Separate sut;
    std::vector<int> input {9, 6, 3, 4, 2, 1};
    std::vector<int> output {1, 3, 9, 6, 4, 2};
    EXPECT_EQ(sut.separateOddEven(input), output);
}
