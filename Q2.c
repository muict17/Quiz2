#include <stdio.h>
#define leng 4
int main()
{
    int i;
    int k;
    char bin[leng + 1];
    char com1[leng + 1];
    char com2[leng + 1];
    gets(bin);
    for ( i = 0; i < leng; i++)
    {
        if (bin[i] == '1')
        {
            com1[i] = '0';
        }
        else if (bin[i] == '0')
        {
            com1[i] = '1';
        } 
    }
    com1[leng] = '\0';
    for (i = leng - 1; i >= 0; i++)
    {
        if (com1[i] == '1' && k == 1)
        {
            com2[i] = '0';
        }
        else if (com1[i] == '0' && k == 1)
        {
            com2[i] = '1';
            k = 0;
        }
        else
        {
            com2[i] = com1[i];
        }
        
    }
    com2[leng] = '\0';
    printf("Binary : %s\n", bin);
    printf("Complement 1 : %s\n", com1);
    printf("Complement 2 : %s\n", com2);

    return 0;
}
