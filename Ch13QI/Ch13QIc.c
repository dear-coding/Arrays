/* Let Us C Book Solutions
 * Author: Vandana @DearCoding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>

void inputArray(int *, int);
int min(int [], int);

int main() 
{
    int arr[25];

    // Input 25 integers from the user
    inputArray(arr, 25);

    // Print the smallest element
    printf("The smallest element is: %d\n", min(arr, 25));

    return 0;
}

// Taking input from user
void inputArray(int *a, int n) 
{
   printf("Enter 25 integers: ");
   for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
}

int min(int arr[], int n)
{
    // Initialize pointer to the first element of the array
    int *ptr = arr;

    // Initialize min to the first element of the array
    int min = *ptr;

    // Traverse the array using pointer and find the smallest element
    for (int i = 0; i < 25; i++) {
        if (*ptr < min)
            min = *ptr;
        ptr++;
    }

    return min;
}