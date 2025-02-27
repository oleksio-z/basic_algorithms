// Binary search
// Return codes: 0 - succes, 1 - not fount, 2 - algorythm broke

#include <cs50.h>
#include <stdio.h>

int ar_length(int array[]);
int bin_search(int data[], int data_end, int data_start, int object);

int main(void)
{
    int data[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int data_set_size = 9;
    int data_start = 0;

    // Ask about object to find

    int object = get_int("Find: ");

    // Call a function

    int res = bin_search(data, data_set_size, data_start, object);

    // Check results

    if (res == 0)
    {
        printf("Found!\n");
    }
    else
    {
        printf("Not found!\n");
    }
}

int bin_search(int data[], int data_end, int data_start, int object)
{
    // Find the start and the end of array and calculate middle
    int middle = data_start + ((data_end - data_start) / 2);

    // Check if middle object is required one
    // If it is -- return
    // Else check is it by the left or right side
    // Repeat with that side
    // If array's end and beginnings cross - terminate algorythm and return false

    if (data_start > data_end)
    {
        return 1;
    }
    else if (data[middle] == object)
    {
        return 0;
    }
    else if (object > data[middle])
    {
        data_start = middle + 1;
        return bin_search(data, data_end, data_start, object);
    }
    else if (object < data[middle])
    {
        data_end = middle - 1;
        return bin_search(data, data_end, data_start, object);
    }

    return 2;
}
