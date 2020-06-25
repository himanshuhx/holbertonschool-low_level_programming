#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - (not work) program that gerenes random valid passwords for the program \
101-crackme
*
*
*return: 0.
*/
int main(void)
{
        int a = 0;
        char c[10];
        srand(time(NULL));
        while (a < 10)
        {
                c[a] = 33 + rand() % 94;
                a++;
        }
        c[a] = '\0';
        printf("%s\n", c);
        return (0);
}
