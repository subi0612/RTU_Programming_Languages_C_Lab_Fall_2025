#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;      // Pointer to dynamically allocated array
    int n;         // Number of elements
    int sum = 0;   // Sum of the elements
    float average; // Average of the elements

    // Ask for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(n * sizeof(int));

    // Check if malloc succeeded
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Return with error code if malloc fails
    }

    // Ask user to input the elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add the value to the sum
    }

    // Calculate average
    average = (float)sum / n;

    // Output sum and average
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
