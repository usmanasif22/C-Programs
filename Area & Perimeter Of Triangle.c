#include<stdio.h>
int main()
{
    int base,vh,hypotenus,area,perimeter ;
       base=5,vh=15,hypotenus=10;

  //Finding Area Of Triangle
    area=0.5 * base * vh;
    printf("The Area of Triangle is %d",area);

  //Finding perimeter of Triangle
    perimeter=base + vh + hypotenus ;
    printf("\n\nThe Perimeter of Triangle is %d",perimeter);
    return 0 ;  }
