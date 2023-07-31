/* Let Us C Book Solutions
 * Author: Vandana @DearCoding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

Q[B] Point out the errors, if any, in the following program segments:

/* mixed has some char and some int values */
#include <stdio.h>
int char mixed[100];
int main()
{
    int a[10], i;
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", a[i]); 
        printf("%d\n", a[i]);
    }
    return 0;
}

// error: two or more data types in declaration specifiers
//  int char mixed[100];
//      ^~~~


// CORRECT PROGRAM
#include <stdio.h>
int mixed[100];
int main()
{
    int a[10], i;
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &a[i]); 
        printf("%d\n", a[i]);
    }
    return 0;
}

// Sample Input and Output:
// 4
// 4
// 34
// 34
// 12
// 12
// 9
// 9
// 5
// 5
// 100
// 100
// 456
// 456
// 2
// 2
// 98
// 98
// 566
// 566
