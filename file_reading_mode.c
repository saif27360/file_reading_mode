#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    FILE *fptr;
    if ((fptr=fopen("E:\\newprogram.txt","r"))==NULL)
    {
        printf("Error! opening file");
        exit(1);
    }
    fscanf(fptr,"%d",&n);
    printf("Value of n=%d",n);
    fclose(fptr);
    return 0;
}
