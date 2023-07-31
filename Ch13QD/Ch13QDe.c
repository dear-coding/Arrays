/* Let Us C Book Solutions
 * Author: Vandana @DearCoding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>

void swap(int *, int *);
void interchange(int [], int);
void printArray(int [], int);
void printPositiveArray(int [], int);

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    interchange(arr, n);

    printf("Interchanged array: ");
    printPositiveArray(arr, n);

    return 0;
}

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void interchange(int arr[], int n) 
{
    int o = 0, e = 0;
 
    // Traverse the given array
    for(int i = 0; i < n; i++)
    {         
        // If arr[i] is visited
        if (arr[i] < 0)
            continue;
 
        int r = -1;
 
        if (arr[i] % 2 == 0)
        {
            // Find the next non-negative odd element
            while (arr[o] % 2 == 0 || arr[o] < 0)
                o++;
                 
            r = o;
        }
        else
        {
            // Find next non-negative even element
            while (arr[e] % 2 == 1 || arr[e] < 0)
                e++;
                 
            r = e;
        }
 
        // Mark them visited
        arr[i] *= -1;
        arr[r] *= -1;

        swap(&arr[i], &arr[r]);

    }
}

void printPositiveArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i] *= -1);
        printf("\n");
}

void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        printf("\n");
}