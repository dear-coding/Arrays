/* Let Us C Book Solutions
 * Author: Vandana @DearCoding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>

void inputArray(int *, int);
int searchInArray(int *, int, int);

int main() 
{
   int arr[25];

   // Taking input from user   
   inputArray(arr, 25);

   int searchNum;
   // Taking input of number to be searched
   printf("Enter the number to be searched: ");
   scanf("%d", &searchNum);

   int count = searchInArray(arr, 25, searchNum);

   // Displaying the result
   if (count == 0)
      printf("%d is not present in the array.", searchNum);
   else
      printf("%d is present in the array %d times.", searchNum, count);

   return 0;
}

// Taking input from user
void inputArray(int *arr, int n) 
{
   printf("Enter 25 integers: ");
   for (int i = 0; i < n; i++)
      scanf("%d", &arr[i]);
}

// Searching the array for the number
int searchInArray(int *arr, int n, int searchNum) 
{
   int count = 0;

   for (int i = 0; i < 25; i++)
      if (arr[i] == searchNum)
         count++;

   return count;
}
