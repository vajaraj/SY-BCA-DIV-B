#include <stdio.h>

int main()
{
    FILE *fp;
    char c;
    int i = 0, l;

    fp = fopen("fseek1.txt", "r");

    if(fp == NULL)
    {
        printf("File not found!");
        return 1;
    }

    printf("\n");

    while(1)
    {
        fseek(fp, i, SEEK_SET);
        c = fgetc(fp);

        if(feof(fp))
            break;

        printf("%c", c);
        i += 2;
    }

    l = ftell(fp);
    printf("\nFILE length = %d", l);

    fclose(fp);
    return 0;
}