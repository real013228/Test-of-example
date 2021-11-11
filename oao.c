#include <string.h>
#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
int main(int argc, char *argv[])
{
    FILE *fin = fopen(argv[2],"r");
    int option = 0;
    if(strcmp(argv[1],"-l") == 0)
    {
        option = 1;
    }
    if(strcmp(argv[1],"-c") == 0)
    {
        option = 2;
    }
    if(strcmp(argv[1],"-w") == 0)
    {
        option = 3;
    }
    //printf("%d\n",option);
    int cntlines = 0;
    int cntwords = 0;
    int cntbytes = 0;
    if(option != 0)
    {
        while(1)
        {
            char str[100000];
            fgets(str,sizeof(str),fin);
            if(option == 1)
            {
                cntlines++;
            }
            if(option == 2)
            {
                cntbytes += strlen(str);
            }
            if(option == 3)
            {
                int ans = 1;
                int iter = 0;
                while(iter < strlen(str))
                {
                    int chet = 0;
                    if(*(str + iter) >= 'A' && *(str + iter) <= 'Z')
                    {
                        chet = 1;
                    }
                    else
                    {
                        cntwords++;
                    }
                    iter++;
                }
            }
            if(feof(fin) != 0)
            {
                break;
            }
        }
        if(option == 1)
        {
            printf("\nThe count of lines equals %d\n", cntlines);
        }
        if(option == 2)
        {
            printf("\nThe count of bytes equals %d\n", cntbytes);
        }
        if(option == 3)
        {
            printf("\nThe count of words equals %d\n", cntwords);
        }
    }
    else
    {
        printf("Uchi options:\n");
        printf("<-l> - vyvodit count lines\n");
        printf("<-c> - vyvodit count bytes\n");
        printf("<-w> - vyvodit count words\n");
    }
    printf("Chtenie zakoncheno\n");
    return 0;
}
