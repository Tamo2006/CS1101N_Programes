#include <stdio.h>

int arraySum(int arr[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sum of array elements = %d\n", arraySum(arr, n));
    return 0;
}
