/* Let Us C Book Solutions
 * Author: Vandana @DearCoding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size]; 
    for (i = 1; i <= size; i++)
    {
        scanf("%d", &arr[i]); 
        printf("%d\n", arr[i]);
    }
    return 0;
}

// error: 'i' undeclared (first use in this function)
//      for (i = 1; i <= size; i++)


// CORECT PROGRAM
#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size]; 
    for (int i = 1; i <= size; i++)
    {
        scanf("%d", &arr[i]); 
        printf("%d\n", arr[i]);
    }
    return 0;
}

// Sample Input and Output:
// 4
// 1
// 1
// 2
// 2
// 3
// 3
// 4
// 4


// PLAY WITH PROGRAM
#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size]; 
    for (int i = 1; i <= size; i++)
    {
        scanf("%d", &arr[i]); 
        printf("%d\n", arr[i]);
    }
    printf("%d\n", arr[100] = 3); // Output: 3
    printf("%d\n", arr[100]); // Output: 3
    return 0;
}