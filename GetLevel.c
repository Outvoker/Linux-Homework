#include <stdio.h>
void GetLevel(int *a)
{
    int i,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
    for(i=0;i<6;i++)
        switch(a[i])
    {
        case 1:a1++;break;
        case 2:a2++;break;
        case 3:a3++;break;
        case 4:a4++;break;
        case 5:a5++;break;
        case 6:a6++;break;
    }
    printf("您的博饼等级为：");
    if(a4==4&&a1==2) printf("状元插金花\n");
    else if(a1==6||a2==6||a3==6||a5==6||a6==6) printf("状元：黑六勃\n");
    else if(a4==5) printf("状元：红五\n");
    else if(a1==5||a2==5||a3==5||a5==5||a6==5) printf("状元：五子\n");
    else if(a1==1&&a2==1&&a3==1&&a4==1&&a5==1&&a6==1) printf("对堂：一条龙\n");
    else if(a4==3) printf("三红\n");
    else if(a1==4||a2==4||a3==4||a5==4||a6==4) printf("四进\n");
    else if(a4==2) printf("二举\n");
    else if(a4==1) printf("一秀\n");
    else printf("落空\n");




}
