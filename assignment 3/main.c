#include<stdio.h>
#include<stdlib.h>

/*int main(){
    float a,b,c ;
    float d,i,j;
    printf("let quadratic eqn  is of form ax^2 + bx +c then enter a=");
    scanf("%f",&a);
    printf("enter b=");
    scanf("%f",&b);
    printf("enter c=");
    scanf("%f",&c);
    d=b*b-4*a*c;
    i=sqrt(d);
    j=sqrt(-d);
    if (a==0){
        printf("The given eqn is not quadratic ");
    }
    if(a!=0&&d>0){
        printf ("the roots are real and unequal %f\t \a  %f\n",(-b+i)/(2*a),(-b-i)/(2*a));
    }
    else if (a!=0&&d==0){printf("roots are equal and are = %f\n\a",-b/(2*a));}
    else if (a!=0&&d<0){
        printf(" roots are imaginary \n ");
        printf("first root is R1 =%f+i%f\n",-b/(2*a),j/(2*a));
        printf("second root is R2= %f-i%f\n",-b/(2*a),j/(2*a));

    }
}


// program no. 2
/*int main()
{
    int x,y,z;
    printf("enter three numbers");
    scanf("%d%d%d",&x,&y,&z);
    int j;
    j=(x>y?y>z?x:y:z);
    printf("%d",j);
}

//program no. 3

 int main()
 {
  int a;
  printf("Enter the number to be checked \t");
  scanf("%d",&a);
  if(a%2==0)
  {
      printf("%d is even",a);

  }
  else{
    printf("%d is odd",a);
  }
 }*/


/* int main(){
 int a;
 printf("Enter the number to be checked \t");
 scanf("%d",&a);
 if (a>0){
    printf("%d is positive ",a);
 }
  else if (a==0)
  {
      printf("the number entred is zero");
  }
  else {
    printf("%d is negative",a);
  }
 }*/

/* int main(){
 int a,b;
 printf(" Enter the two numbers");
 scanf("%d%d",&a,&b);
 if (a>b){
    printf("%d is greater than %d",a,b);
 }
 else {
    printf("%d is greater than %d",b,a);

 }
 }*/

/* int main()
 {
     int a,b,c;
     printf("enter the three numbers\t");
     scanf("%d%d%d",&a,&b,&c);
     if (a>b&&a>c)
        printf("%d is the greatest",a);
    else if (a<b&&b>c)
        printf("%d is the greatest",b);
        else if (c>b&&c>b)
        printf("%d is the greatest",c);


 }*/




int main(){
    int x;
scanf("%d",&x);
if(x==1){
    printf("one");
}
else if(x==2){
    printf("two");
}else if(x==3){
    printf("three");
}else if(x==4){
    printf("four");
}else if(x==5){
    printf("five");
}else if(x==6){
    printf("six");
}else if(x==7){
    printf("seven");
}else if(x==8){
    printf("eight");
}else if(x==9){
    printf("nine");
}
else if (x>9){
    printf("Greater than 9");
}
    return 0;

}




