#pragma once
#include <string>
#include <iostream>
//    auto separatOddFromEven(std::vector<int> arr) -> void
//    {
//        auto isEven = [](int a){return a % 2 == 0;};
//        auto isGreater = [](int a,int b){return a > b;};
//        std::sort(arr.begin(),arr.end());
//        for (int i = 0; i < arr.size(); i++)
//        {
//            if(isEven(arr[0]))
//            {
//            }
//            if (arr[i] % 2 == 0)
//                std::cout << "Even: " << arr[i] << " ";
//        }

//    auto separatOddFromEven(int arr[], int n) -> void
//    {
//        int i = 1;
//        int j = n-1;
//        auto isGreater = [](int a,int b){return a > b;};
//        if (j%2!=0)
//            j--;
//
//        // swapping till half of array
//        while (i<j)
//        {
//            swap(arr[i], arr[j]);
//            i += 2;
//            j -= 2;
//        }
//        // Sort first half in increasing
//        std::sort(arr, arr+(n+1)/2);
//
//        // Sort second half in decreasing
//        sort(arr+(n+1)/2, arr+n, std::greater<int>());
//    }
struct Separate
{
    template<typename T>
    auto swapArr(T &a, T &b) -> void;

    void SwapForBubble(int* a, int* b);

    void BubbleSort(std::vector<int> &array);

    auto printArray(std::vector<int> vec) -> void;

    auto separateOddEven(std::vector<int> arr) -> std::vector<int>;

    bool isEven(int a);

    std::vector<int> &sortAcendinglyDescending(std::vector<int> &arr, int last);

};
