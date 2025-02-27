#include <stdio.h>

// sorting function prototype
int bubble_sort(int data[], int data_size);

int main(void)
{
    // Get usorted data set
    int data_set[] = {2, 1, 3, 10, 5, 8, 6, 7, 11, 9, 4, 0};
    int data_size = 10;

    printf("Before: ");
    for (int i = 0; i < data_size; i++)
    {
        printf("%i,", data_set[i]);
    }
    printf("\n");

    //call a sorting function
    bubble_sort(data_set, data_size);

    // print res - sorted data set
    printf("After:  ");

    for (int i = 0; i < data_size; i++)
    {
        printf("%i,", data_set[i]);
    }
    printf("\n");

    return 0;
}

// sorting function
int bubble_sort(int data[], int data_size)
{
    int swap_count = -1;
    int container = 0;
    while (swap_count != 0)
    {
        swap_count = 0;
        for (int i = 0; i < data_size - 1; i++)
        {
            if (data[i] > data[i+1])
            {
                container = data[i];
                data[i] = data[i+1];
                data[i+1] = container;
                swap_count++;
            }
        }
    }

    return 0;
}
