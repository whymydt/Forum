#include <stdio.h>
#include <stdlib.h>

void A_static()
{
int SIZE = 9;
    int data[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        data[i] = i + 1;
    }

    // Print output in static memory
    for (i = 0; i < SIZE; i++)
    {
        printf("Value %d: %d\n", i + 1, data[i]);
    }
}

void B_dynamic()
{
  int SIZE = 9;
    int *dataPtr;

    // Buat alokasi memori
    dataPtr = (int *)malloc(SIZE * sizeof(int));

    // Iferror alokasi memori
    if (dataPtr == NULL)
    {
        printf("Gagal mengalokasikan memori.");
        return;
    }

    for (i = 0; i < SIZE; i++)
    {
        dataPtr[i] = i + 1;
    }

    // Print output in dynamic memory
    for (i = 0; i < SIZE; i++)
    {
        printf("Value %d: %d\n", i + 1, dataPtr[i]);
    }

    // Free alokasi memory
    free(dataPtr);
}


int main()
{
    printf("Static Memory");
    printf("----------------");
    staticMemory();
    printf("\n\nDynamic Memory");
    printf("----------------");
    dynamicMemory();
    return 0;
}
