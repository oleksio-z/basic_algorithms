#include <stdio.h>

void sel_sort(int data[], int data_size);

int main(void)
{
    // Get usorted data set

    int data[] = {3,5,2,7,8,6,4,1,0,9};
    int data_size = 10;

    printf("Before: ");
    for (int i = 0; i < data_size; i++)
    {
        printf("%i, ", data[i]);
    } printf("\n");

    // Pass it to sorting function

    sel_sort(data, data_size);

    // Print results

    printf("After:  ");
    for (int i = 0; i < data_size; i++)
    {
        printf("%i, ", data[i]);
    } printf("\n");

    return 0;
}

void sel_sort(int data[], int data_size)
{
    int smallest = data[0];

    for (int i = 0; i < data_size-1; i++)
    {
        smallest = i;
        for (int j = i+1; j < data_size; j++)
        {
            if (data[j] < data[smallest])
            {
                smallest = j;
            }
        }
        if (data[smallest] != data[i])
        {
            int temp = data[i];
            data[i] = data[smallest];
            data[smallest] = temp;
        }
    }
}
