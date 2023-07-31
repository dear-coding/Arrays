/* Let Us C Book Solutions
 * Author: Vandana @DearCoding 💜
 * https://www.youtube.com/@DearCoding */

💜 Watch All Chapters PLAYLIST On YouTube 💜  
https://youtube.com/playlist?list=PLdBju4Bv7C3B2ZSf2gzE0Epd3d668VIGP 

#include <stdio.h>

int main()
{
    int num[100], i, j;

    // Step 1: Fill the array with numbers from 1 to 100
    for (i = 0; i < 100; i++) {
        num[i] = i + 1;
    }

    // Step 2 to 4: Set multiples of non-zero elements to zero
    for (i = 1; i < 7; i++) {
        if (num[i] != 0) {
            for (j = i + 1; j < 100; j++) {
                if (num[j] % num[i] == 0) {
                    num[j] = 0;
                }
            }
        }
    }

    // Step 5: Print out the prime numbers
    printf("Prime numbers between 1 and 100 are: \n");
    for (i = 0; i < 100; i++) {
        if (num[i] != 0 && num[i] != 1)
            printf("%d ", num[i]);
    }

    return 0;
}
