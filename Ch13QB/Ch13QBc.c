/* Let Us C Book Solutions
 * Author: Vandana @DearCoding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

Q[B] Point out the errors, if any, in the following program segments:

#include <stdio.h>
int main()
{
    int i, a = 2, b = 3;

    int arr[2 + 3]; 
    for (i=0; i<a+b; i++)
    {
        scanf("%d", &arr[i]); 
        printf("%d\n", arr[i]);
    }
    return 0;
}

// No Error
// Sample Input and Output:
// 1
// 1
// 2
// 2
// 3
// 3
// 4
// 4
// 5
// 5