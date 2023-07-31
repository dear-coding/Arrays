/* Let Us C Book Solutions
 * Author: Vandana @DearCoding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>

void displayArr(int *, int);
void selectionSort(int [], int);
void bubbleSort(int arr[], int n);

int main() 
{
    int arr[] = {10, 7, 8, 9, 1, 5, 15, 12, 16, 18, 22, 20, 25, 24, 19, 14, 17, 3, 2, 4, 6, 11, 13, 21, 23};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Bubble Sort
    printf("Bubble Sort:\n");
    bubbleSort(arr, n);
    displayArr(arr, n);

    return 0;
}

void displayArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Selection Sort Algorithm
void selectionSort(int arr[], int n) 
{
    for (int i = 0; i < n-1; i++) {
        int minIdx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        // swapping
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

// Bubble Sort Algorithm
void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j+1] < arr[j]) {
                // swapping
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}