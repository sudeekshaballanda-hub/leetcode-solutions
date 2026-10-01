#include <stdio.h>

void moveZeroes(int nums[], int size)
{
    int position = 0;
    int i;
    int temp;

    for (i = 0; i < size; i++)
    {
        if (nums[i] != 0)
        {
            temp = nums[position];
            nums[position] = nums[i];
            nums[i] = temp;

            position++;
        }
    }
}

void printArray(int nums[], int size)
{
    int i;

    printf("[");
    for (i = 0; i < size; i++)
    {
        printf("%d", nums[i]);

        if (i < size - 1)
            printf(", ");
    }
    printf("]\n");
}

int main()
{
    // Test Case 1 - Typical case
    int nums1[] = {0, 1, 0, 3, 12};

    printf("Test Case 1:\n");
    printf("Input: [0, 1, 0, 3, 12]\n");
    printf("Expected: [1, 3, 12, 0, 0]\n");

    moveZeroes(nums1, 5);

    printf("Output: ");
    printArray(nums1, 5);

    printf("\n");

    // Test Case 2 - Edge case: all zeroes
    int nums2[] = {0, 0, 0};

    printf("Test Case 2:\n");
    printf("Input: [0, 0, 0]\n");
    printf("Expected: [0, 0, 0]\n");

    moveZeroes(nums2, 3);

    printf("Output: ");
    printArray(nums2, 3);

    return 0;
}