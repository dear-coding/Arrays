/* Let Us C Book Solutions
 * Author: Vandana @DearCoding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>

void inputArray(int *a, int n);

int main() 
{
    // Reading numbers from user and storing in array
    int arr[25];
    printf("Enter 25 numbers:\n");
    inputArray(arr, 25);

    int positiveCount = 0;
    int negativeCount = 0;
    int evenCount = 0;
    int oddCount = 0;
    
    // Counting positive, negative, even, and odd numbers
    for(int i = 0; i < 25; i++) 
    {
        if(arr[i] > 0)
            positiveCount++;
        else if(arr[i] < 0)
            negativeCount++;

        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Printing results
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);

    return 0;
}

// Taking input from user
void inputArray(int *a, int n) 
{
   for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
}