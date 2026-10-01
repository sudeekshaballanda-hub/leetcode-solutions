#include <stdio.h>

void twoSum(int nums[], int size, int target)
{
    int i, j;

    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("Indices: [%d, %d]\n", i, j);
                return;
            }
        }
    }

    printf("No valid pair found.\n");
}

int main()
{
    // Test Case 1 - Typical case
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;

    printf("Test Case 1:\n");
    printf("Input: [2, 7, 11, 15], Target = 9\n");
    printf("Expected: [0, 1]\n");
    printf("Output: ");
    twoSum(nums1, 4, target1);

    printf("\n");

    // Test Case 2 - Edge case with duplicate values
    int nums2[] = {3, 3};
    int target2 = 6;

    printf("Test Case 2:\n");
    printf("Input: [3, 3], Target = 6\n");
    printf("Expected: [0, 1]\n");
    printf("Output: ");
    twoSum(nums2, 2, target2);

    return 0;
}