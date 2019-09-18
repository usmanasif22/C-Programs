#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int percentile,sum,grade,cp,eng,math,comp,phy,urdu;

    printf("\n\t\t>>>>>Enter Number of Five Subjects<<<<< \n");

    printf("\n Subject 1 :");
    scanf("%d",&eng);

    printf(" Subject 2 :");
    scanf("%d",&math);

    printf(" Subject 3 :");
    scanf("%d",&comp);

    printf(" Subject 4 :");
    scanf("%d",&phy);

    printf(" Subject 5 :");
    scanf("%d",&urdu);

    sum=eng+math+comp+phy+urdu;

    percentile=(sum/500.0)*100;

    printf("\nYour Percentage is :%d\n",percentile);

    if(percentile<50)
    {
        printf("Grade is F\n");
        printf("credit points are : 0\n");

    }
    else if(percentile>=50 && percentile<=54)
    {
        printf("Grade is D\n");
        printf("credit points are : 1.3\n");

    }
    else if(percentile>=55 && percentile<=59)
    {
        printf("Grade is C-\n");
        printf("credit points are : 1.7\n");

    }
    else if(percentile>=60 && percentile<=64)
    {
        printf("Grade is C\n");
        printf("credit points are : 2.0v");

    }
    else if(percentile>=65 && percentile<=69)
    {
        printf("Grade is C+\n");
        printf("credit points are : 2.3\n");

    }
    else if(percentile>=70 && percentile<=74)
    {
        printf("Grade is B-\n");
        printf("credit points are : 2.7\n");

    }
    else if(percentile>=75 && percentile<=79)
    {
        printf("Grade is B\n");
        printf("credit points are : 3.0\n");

    }
    else if(percentile>=80 && percentile<=84)
    {
        printf("Grade is B+\n");
        printf("credit points are : 3.3\n");

    }
    else if(percentile>=85 && percentile<=89)
    {
        printf("Grade is A-\n");
        printf("credit points are : 3.7\n");

    }
    else if(percentile>=90)
    {
        printf("Grade is A\n");
        printf("credit points are : 4.0\n");

    }


    system("pause");
    return 0;
}
