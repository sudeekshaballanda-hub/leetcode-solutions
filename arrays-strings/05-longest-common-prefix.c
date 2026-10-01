#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char strs[][100], int size)
{
    int i, j;
    int length = strlen(strs[0]);

    for (i = 1; i < size; i++)
    {
        j = 0;

        while (j < length &&
               strs[0][j] != '\0' &&
               strs[i][j] != '\0' &&
               strs[0][j] == strs[i][j])
        {
            j++;
        }

        length = j;
    }

    printf("Longest Common Prefix: ");

    for (i = 0; i < length; i++)
    {
        printf("%c", strs[0][i]);
    }

    if (length == 0)
        printf("(empty)");

    printf("\n");
}

int main()
{
    // Test Case 1 - Typical case
    char strs1[3][100] = {
        "flower",
        "flow",
        "flight"
    };

    printf("Test Case 1:\n");
    printf("Input: [flower, flow, flight]\n");
    printf("Expected: fl\n");
    longestCommonPrefix(strs1, 3);

    printf("\n");

    // Test Case 2 - Edge case: no common prefix
    char strs2[3][100] = {
        "dog",
        "racecar",
        "car"
    };

    printf("Test Case 2:\n");
    printf("Input: [dog, racecar, car]\n");
    printf("Expected: empty\n");
    longestCommonPrefix(strs2, 3);

    return 0;
}