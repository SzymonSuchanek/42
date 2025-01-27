#include <limits.h>

void sort(int *n, int size)
{
    int i = 0;
    int j;
    int index = 0;
    int temp = 0;
    int lowest;
    int start = 0;

    while (i + 1 < size)
    {
        j = i;
        lowest = INT_MAX;
        while (j < size)
        {
            if (n[j] < lowest)
            {
                lowest = n[j];
                index = j;
            }
            j++;
        }
        temp = n[i];
        n[i] = lowest;
        n[index] = temp;
        i++;
    }
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
    int j = 0;

    while (j < nums2Size)
    {
        nums1[m + j] = nums2[j];
        j++;
    }
   sort(nums1, nums1Size);
}
