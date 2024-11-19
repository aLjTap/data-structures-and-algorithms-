#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, a = 5;
    p = &a;

    printf("a bellek adresi : %p\n", &a);
    printf("a degeri : %d\n", a);
    printf("p bellek adresi : %p\n", p);
    printf("p degeri : %d\n", *p);
    // uses free method
    int *ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated using malloc.\n");

        // Get the elements of the array
        for (int i = 0; i < 5; ++i)
        {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        printf("The elements of the array are: ");
        for (int i = 0; i < 5; ++i)
        {
            printf("%d, ", ptr[i]);
        }
    }

    // Deallocate memory
    free(ptr);
    printf("Malloc Memory successfully deallocated.\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d, ", ptr[i]);
    }
    return 0;
}