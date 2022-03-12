#pragma once
#include <string>
#include <iostream>
#include <vector>

struct Separate
{
    template<typename T>
    auto swapArr(T &a, T &b) -> void;

    void SwapForBubble(int* a, int* b);

    void BubbleSort(std::vector<int> &array);

    auto printArray(std::vector<int> vec) -> void;

    auto separateOddEven(std::vector<int> arr) -> std::vector<int>;

    bool isEven(int a);

    std::vector<int> & sortAcendinglyDescending(std::vector<int> &arr, int last);

};
