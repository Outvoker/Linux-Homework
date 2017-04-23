#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void Random(int *a)
{
    int i;
    unsigned int seed=time(NULL);
    srand(seed);
    for(i=0;i<6;i++)
    a[i]=rand()%6+1;
     printf("您的博饼结果为：");
     for(i=0;i<6;i++)
        printf("%d ",a[i]);
        printf("\n");
}
