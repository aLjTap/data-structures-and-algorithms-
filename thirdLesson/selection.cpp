#include <iostream>
#include "arrayAndFileProcces.h"
using namespace std;
/**
 * @brief  SELECTION SORT ARRAY
 *
 */

int main()
{
    putRandomNumberInFile(10);
    int A[10];
    FILE *f = fopen("random.txt", "r");
    for (int i = 0; i <= 9; i++)
    {
        fscanf(f, "%d", &A[i]);
    }

    for (int i = 0; i <= 9; i++)
    {
        int min = i;
        for (int j = i + 1; j <= 9; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
        }
        int temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }

    printArray(A, 10);

    return 0;
}