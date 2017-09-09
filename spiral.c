#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

void print(uint64_t ms[10][10])
{
    for (int st = 0; st < 10; st++)
    {
        for(int sb = 0; sb < 10; sb++)
        {
            printf("%lu ", ms[st][sb]);
        }
        printf("\n");
    }
    printf("\n\n");
}

uint64_t spiral(uint64_t ms[10][10])
{
    uint64_t a = 0;
    int strstart = 0;
    int ststart = 0;
    int strend = 9;
    int stend = 9;
    for (int x = strstart; x <= strend; x++) //строка
    {
        for (int y = ststart; y <= stend; y++) //столбец
        {
            ms[x][y] = a++;
        }
        strstart++;
        for (x = strstart; x <= strend; x++) //строка
        {
            ms[x][stend] = a++;
        }
        stend--;
        for (int y = stend; y >= ststart; y--)         //столбец
        {
            ms[strend][y] = a++;
        }
        strend--;
        for(x=strend; x >= strstart; x--) //строка
        {
            ms[x][ststart] = a++;
        }
        ststart++;
    }
}

int main()
{
    uint64_t ms[10][10] = {0, 0};
    spiral(ms);
    print(ms);
    return 0;
}