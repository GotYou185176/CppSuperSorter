#ifndef SORT_H
#define SORT_H

#include <algorithm> // For std::swap

// Bubble Sort
template <typename T>
void bubble_sort(T arr[], int size, char order)
{
    if (order == '>')
    {
        for (int i = 0; i < size - 1; ++i)
        {
            bool swapped = false;
            for (int j = 0; j < size - i - 1; ++j)
            {
                if (arr[j] < arr[j + 1])
                {
                    std::swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped) break;
        }
    }
    else if (order == '<')
    {
        for (int i = 0; i < size - 1; ++i)
        {
            bool swapped = false;
            for (int j = 0; j < size - i - 1; ++j)
            {
                if (arr[j] > arr[j + 1])
                {
                    std::swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped) break;
        }
    }
}

// Selection Sort
template <typename T>
void selection_sort(T arr[], int size, char order)
{
    if (order == '<')
    {
        for (int i = 0; i < size - 1; ++i)
        {
            int min_index = i;
            for (int j = i + 1; j < size; ++j)
            {
                if (arr[j] < arr[min_index])
                {
                    min_index = j;
                }
            }
            std::swap(arr[min_index], arr[i]);
        }
    }
    else if (order == '>')
    {
        for (int i = 0; i < size - 1; ++i)
        {
            int max_index = i;
            for (int j = i + 1; j < size; ++j)
            {
                if (arr[j] > arr[max_index])
                {
                    max_index = j;
                }
            }
            std::swap(arr[max_index], arr[i]);
        }
    }
}

#endif // SORT_H
