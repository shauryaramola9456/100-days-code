// Q67:Insert an element in an array at a given position.
#include <stdio.h>

int main()
{
    int a[100], n, i, element, position;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position: ");
    scanf("%d", &position);

    // Shift elements one position to the right
    for(i = n; i >= position; i--)
    {
        a[i] = a[i - 1];
    }

    // Insert the new element
    a[position - 1] = element;

    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}