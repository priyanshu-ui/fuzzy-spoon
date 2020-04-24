#include<stdio.h>
int main(){
    float a,b,c ;
    float d,i,j;
    printf("let quadratic eqn  is of form ax^2 + bx +c then enter a=\n");
    scanf("%f",&a);
    printf("enter b=");
    scanf("%f",&b);
    printf("enter c=");
    scanf("%f",&c);
    d=b*b-4*a*c;
    i=sqrt(d);
    j=sqrt(-d);
    if (a==0){
        printf("go and study maths stupid! ");
    }
    if(a!=0&&d>0){
        printf ("the roots are real and unequal R1= %f\n ,R2=%f\n",(-b+i)/(2*a),(-b-i)/(2*a));
    }
    else if (a!=0&&d==0){printf("roots are equal and are R1= %f\n",-b/(2*a));}
    else {
        printf(" roots are imaginary \n ");
        printf("first root is R1 =%f+i%f\n",-b/(2*a),j/(2*a));
        printf("second root is R2= %f-i%f\n",-b/(2*a),j/(2*a));
        
    }
}
    
    
        


