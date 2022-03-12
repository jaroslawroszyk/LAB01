#include "mergeSort.h"
#include <vector>

namespace Task1
{
    auto Merge::quickSort(std::string &str, int start, int end) -> void
    {
        int startPos = start;
        int endPos = end;
        int pivot = str[(startPos + endPos) / 2];
        do
        {
            while (str[startPos] < pivot) startPos++;

            while (str[endPos] > pivot) endPos--;

            if (startPos <= endPos)
            {
                std::swap(str[startPos], str[endPos]);
                startPos++;
                endPos--;
            }
        }
        while (startPos <= endPos);

        if (start < endPos) quickSort(str, start, endPos);

        if (startPos < end) quickSort(str, startPos, end);
    }
} //namespace Task1
