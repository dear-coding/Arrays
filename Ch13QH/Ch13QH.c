/* Let Us C Book Solutions
 * Author: Vandana @DearCoding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

Q[H] State True or False:

(a) Address of a floating-point variable is always a whole number. 
Ans: True

Q[H](b) Which of the following is the correct way of declaring a float pointer:

1. float ptr; 
// 2. float *ptr; ✔️
3. *float ptr;
4. None of the above

Q[H](c) Add the missing statement for the following program to print 35:

#include <stdio.h>
int main() 
{
    int j, *ptr;
    *ptr = 35;
    printf("%d\n", j);
    return 0;
}

// Solution: 

#include <stdio.h>
int main() 
{
    int j, *ptr;
    ptr = &j;
    *ptr = 35;
    printf("%d\n", j);
    return 0;
}

Q[H](d) If int s[5] is a one-dimensional array of integers, 
which of the following refers to the third element in the array?

// 1. *(s+2) ✔️
2. *(s+3)
3. s + 3 
4. s + 2



