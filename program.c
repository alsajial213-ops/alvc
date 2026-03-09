#include <stdio.h>

int main()
{
    int n,i,largest,secondlargest;

    printf("Enter no of elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    largest = arr[0];
    secondlargest = arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
    }

    printf("%d is largest and %d is second largest",largest, secondlargest);

    return 0;
}