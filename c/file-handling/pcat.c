#include <stdio.h>

int main(int argc, char *argv[])
{

    char c;
    // ---- logic to support OS's inbuilt file creation system -------
    if (argc == 1)
    {
        while ((c = getchar()) != EOF)
        {
            putchar(c);
        }
    }
    else
    {
        FILE *fp;
        fp = fopen(argv[1], "r");
        while ((c = getc(fp)) != EOF)
        {
            putchar(c);
        }
    }
    return 0;
}