#include<stdio.h>

int main()
{
    int n, value, data[10], i, j, found = 0;
    
    printf("Enter array size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("\nArray before deletion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", data[i]);
    }

    printf("\nEnter element to delete: ");
    scanf("%d", &value);

    // Find the first occurrence of the element and delete it
    for(i = 0; i < n; i++)
    {
        if(data[i] == value)
        {
    
            for(j = i; j < n - 1; j++)
            {
                data[j] = data[j + 1];
            }
            n--;  // Reduce the array size
            found = 1;
            break;  //breaking the loop
        }
    }

    if(found == 0)
    {
        printf("\nElement not found\n");
    }
    else
    {
        printf("\nUpdated array:\n");
        for(i = 0; i < n; i++)
        {
            printf("%d\t", data[i]);
        }
    }

    return 0;
}
