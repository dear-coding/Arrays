/* Let Us C Book Solutions
 * Author: Vandana @DearCoding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>

void modify(int [], int);
void displayArr(int *, int);

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(int);

    // Before modification
    printf("Before modification: ");
    displayArr(arr, size);

    // Call the modify function
    modify(arr, size);

    // After modification
    printf("After modification: ");
    displayArr(arr, size);

    return 0;
}

void displayArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void modify(int arr[], int size) 
{
    for (int i = 0; i < size; i++)
        arr[i] *= 3;
}
