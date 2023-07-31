/* Let Us C Book Solutions
 * Author: Vandana @DearCoding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>

int isPalindrome(int *, int);

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 3, 2, 1};
    int n = sizeof(arr)/sizeof(int);

    if (isPalindrome(arr, n))
        printf("The array is a palindrome.\n");
    else
        printf("The array is not a palindrome.\n");

    return 0;
}

int isPalindrome(int *arr, int n) 
{
    for (int i = 0; i < n/2; i++)
        if (arr[i] != arr[n - i - 1])
            return 0;
            
    return 1;
}
