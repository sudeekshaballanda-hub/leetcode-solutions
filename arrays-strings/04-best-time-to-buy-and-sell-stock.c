#include <stdio.h>

int maxProfit(int prices[], int size)
{
    int minPrice = prices[0];
    int maxProfit = 0;
    int i;

    for (i = 1; i < size; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else if (prices[i] - minPrice > maxProfit)
        {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}

int main()
{
    // Test Case 1 - Typical case
    int prices1[] = {7, 1, 5, 3, 6, 4};

    printf("Test Case 1:\n");
    printf("Input: [7, 1, 5, 3, 6, 4]\n");
    printf("Expected: 5\n");
    printf("Output: %d\n", maxProfit(prices1, 6));

    printf("\n");

    // Test Case 2 - Edge case: prices continuously decrease
    int prices2[] = {7, 6, 4, 3, 1};

    printf("Test Case 2:\n");
    printf("Input: [7, 6, 4, 3, 1]\n");
    printf("Expected: 0\n");
    printf("Output: %d\n", maxProfit(prices2, 5));

    return 0;
}