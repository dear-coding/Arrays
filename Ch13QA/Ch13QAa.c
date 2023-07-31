/* Let Us C Book Solutions
 * Author: Vandana @DearCoding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

Q[A] What will be the output of the following programs:

#include <stdio.h>
int main()
{
    int num[26], temp;
    num[0] = 100; 
    num[25] = 200;
    temp = num[25]; 
    num[25] = num[0];
    num[0] = temp;
    printf("%d %d\n", num[0], num[25]);
    return 0;
}

// 200 100