#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char s[1000];
    char sen[1000000];
    char temp1,temp2;



scanf("%c",&ch);
scanf("%c",&temp1);
scanf("%s",s);
scanf("%c",&temp2);
scanf("%[^\n]%*c",sen);

printf("%c\n",ch);
printf("%s\n",s);
printf("%s\n",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

