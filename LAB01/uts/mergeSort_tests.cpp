#include <gtest/gtest.h>
#include "mergeSort.h"
#include <tuple>
#include <string>

using namespace Task1;

class mergeSortTests : public ::testing::Test
{
protected:

    mergeSortTests() { };

    ~mergeSortTests() override { };
};

TEST_F(mergeSortTests, foo)
{
    Merge sut;

    std::string str = "bcda";
    std::string out = "abcd";
    sut.quickSort(str, 0, str.size() - 1);
    EXPECT_EQ(str, out);
}

class mergeSortTestsParameterizedTestFixture : public ::testing::TestWithParam<std::tuple<std::string,std::string>>
{
};

TEST_P(mergeSortTestsParameterizedTestFixture, OddYearsAreNotLeapYears)
{
    Merge sut;
    std::string input = std::get<0>(GetParam());
    std::string output = std::get<1>(GetParam());
    int startPos{0};
    auto size = input.size() - 1;
    EXPECT_EQ(output,sut.quickSort(input,0,size));
}

INSTANTIATE_TEST_SUITE_P(
        mergeSortTestsParameterizedTest,
        mergeSortTestsParameterizedTestFixture,
        ::testing::Values(
                std::make_tuple("QPRLR", "LPQRR"),
                std::make_tuple("bcda", "abcd"),
                std::make_tuple("DWUUB", "BDUUW"),
                std::make_tuple("IEDYYPWA", "ADEIPWYY"),
                std::make_tuple("JDHCFIXRIK", "CDFHIIJKRX"),
                std::make_tuple("HKMZOLTCE", "CEHKLMOTZ"),
                std::make_tuple("VNTGFO", "FGNOTV"),
                std::make_tuple("KRBIYLIGX", "BGIIKLRXY"),
                std::make_tuple("RLOHUXPXZR", "HLOPRRUXXZ")));