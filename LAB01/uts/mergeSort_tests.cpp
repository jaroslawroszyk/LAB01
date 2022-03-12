#include <gtest/gtest.h>
#include "mergeSort.h"
#include <vector>
#include <string>

using namespace Task1;

class mergeSortTests : public ::testing::Test
{
protected:

    mergeSortTests() { };

    ~mergeSortTests() override { };
};

TEST_F(mergeSortTests,foo)
{
    Merge sut;

    std::string str = "bcda";
    std::string out = "abcd";
    sut.quickSort(str,0,str.size()-1);
    EXPECT_EQ(str,out);
}

TEST_F(mergeSortTests,foo2)
{
    Merge sut;

    std::string str = "QPRLR";
    std::string out = "LPQRR";
    sut.quickSort(str,0,str.size()-1);
    EXPECT_EQ(str,out);
}
