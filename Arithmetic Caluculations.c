#include<stdio.h>
int main()
{
    int a,b,sum,diff,division,product,remainder;
    a=35;
    b=5;
 //Addition
    sum=a+b;
    printf("The Sum Of %d , %d = %d\n\n",a,b,sum);
 //Difference
    diff=a-b;
    printf("The Difference of %d , %d = %d\n\n",a,b,diff);
    //Division
    division=a/b;
    printf("The Division of %d , %d = %d\n\n",a,b,division);
    //Multiprication
    product=a*b;
    printf("The Product of %d , %d = %d\n\n",a,b,product);
    //Remainder
    remainder=a%b;
    printf("The Remainder of %d , %d = %d\n\n",a,b,remainder);

    return 0;
}

