#include<stdio.h>
#include<math.h>

#define f(x) (x*x*x)-(5*x)-7

void main(){

    float a, b, fa, fb, x, fx, e;
    int itr = 1;

    printf("Guess the value of a\n");
    printf("-> ");
    scanf("%f", &a);
    printf("Guess the value of b\n");
    printf("-> ");
    scanf("%f", &b);

    fa = f(a);  //it must be -ve
    fb = f(b);  //it must be +ve

    if(fa*fb >= 0 || fa > 0 || fb < 0){
        printf("--> Incorrect Initial Guesses.\n");
    }
    else{
        printf("What is the tolerable error?\n");
        printf("--> ");
        scanf("%f", &e);

        printf("itr\ta\t\tb\t\tx\t\tfx\n");
        do{
        x = (a*fb - b*fa)/(fb-fa);
        fx = f(x);
        printf("%d\t%f\t%f\t%f\t%f\n",itr,a,b,x,fx);
        if(fa*fx < 0){
            a = x;
            fa = fx;
        }
        else if (fa*fx > 0){
            b = x;
            fb = fx;
        }
        itr++;
        }while(fabs(fx) > e);
    printf("Root is --> %f",x);
    }

}