#include <cs50.h>
#include <stdio.h>

//Creating prototypes

int lin_search(int object, int data[]);

int main(void)
{
    // Setting data and data set
    int data[] = {5,4,3,2,1,0,9,8,7,6};
    int object = get_int("To find: ");

    // Calling function to find given value

    int res = lin_search(object, data);

    // Check and output the results

    if (res == 0)
    {
        printf("Found!\n");
    }
    else
    {
        printf("Not found.\n");
    }
}

// Search function

int lin_search(int object, int data[])
{
    //Cycling trough array
    for(int i = 0; i < 10; i++)
    {
        if (data[i] == object)
        {
            // Returning succes if found
            return 0;
        }
    }
    // Returning error if not found
    return 1;
}
