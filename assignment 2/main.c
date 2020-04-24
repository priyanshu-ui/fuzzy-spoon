#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l,b;
    printf("enter length=");
    scanf("%f",&l);
    printf("enter breadth=");
    scanf("%f",&b);
    printf("area of given rectangle=%f\n",l*b);
    printf("perimeter of given rectangle=%f\n",2*(l+b));

}
