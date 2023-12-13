#include "search_algos.h"

/**
 * linear_search - locates a value within a sorted integer array
 * @array: array of integers to search within
 * @size: size of the array
 * @value: value to find within the array
 * Return: the index of the value if found, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
    size_t idx;

    if (array == NULL)
        return (-1);

    for (idx = 0; idx < size; idx++)
    {
        printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
        if (array[idx] == value)
            return (idx);
    }

    return (-1);
}
