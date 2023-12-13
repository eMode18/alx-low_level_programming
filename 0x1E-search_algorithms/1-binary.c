#include "search_algos.h"

/**
 * binary_search - locates a value within a sorted integer array
 * using the binary search algorithm
 * @array: array of integers to search within
 * @size: size of the array
 * @value: value to find within the array
 * Return: the index of the value if found, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
    size_t indx, left_search, right_search;

    if (array == NULL)
        return (-1);

    for (left_search = 0, right_search = size - 1; right_search >= left_search;)
    {
        printf("Searching in array: ");
        for (indx = left_search; indx < right_search; indx++)
            printf("%d, ", array[indx]);
        printf("%d\n", array[indx]);

        indx = left_search + (right_search - left_search) / 2;
        if (array[indx] == value)
            return (indx);
        if (array[indx] > value)
            right_search = indx - 1;
        else
            left_search = indx + 1;
    }

    return (-1);
}
