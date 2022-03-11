#include "LAB01.h"
#include <iostream>
#include <vector>
#include <algorithm>

bool Separate::isEven(int a)
{
    if(a%2==0)
        return true;
    return false;
}

template<typename T>
auto Separate::swapArr(T &a, T &b) -> void
{
    T temp = a;
    a = b;
    b = temp;
}

auto Separate::printArray(std::vector<int> vec) -> void
{
    for (auto el: vec)
    {
        std::cout << el << " ";
    }
    std::cout << "\n";
}

auto Separate::separateOddEven(std::vector<int> arr) -> void
{
    auto isEven = [](int a) { return a % 2 == 0; };
    auto decrease = [](int a, int b) { return b < a; };
    std::sort(arr.begin(), arr.end());
    printArray(arr);
    bool czyDalejSzukac = true;
    int lastEven = 0;

    for (int i = 0; czyDalejSzukac; i++)
    {
        if (!isEven(arr[i]))
        {
            for (int j = arr.size() - 1; j > i; j--)
            {
                if (isEven(arr[j]))
                {
                    swapArr(arr[i], arr[j]);
                    break;
                }
                if (i + 1 == j)
                {
                    czyDalejSzukac = false;
                    lastEven = i;
                }
            }
        }
    }
    auto iterateToHalfEvenArray = arr.begin() + lastEven;
    std::sort(arr.begin(), iterateToHalfEvenArray);
    printArray(arr);
    std::sort(arr.begin() + lastEven, arr.end(), decrease);
    printArray(arr);
}