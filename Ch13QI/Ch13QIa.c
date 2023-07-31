/* Let Us C Book Solutions
 * Author: Vandana @DearCoding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>

void copyArrInReverse(int *, int *, int);
void displayArr(int *, int);

int main() 
{
    int arr1[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[n];

    // Copy arr1 into arr2 in reverse order
    copyArrInReverse(arr1, arr2, n);    

    // Print the contents of arr2
    printf("Contents of arr2:\n");
    displayArr(arr2, n);
    printf("\n");

    return 0;
}

void copyArrInReverse(int *arr1, int *arr2, int n)
{
    for (int i = 0; i < n; i++)
        arr2[i] = arr1[n - 1 - i];
}

void displayArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
