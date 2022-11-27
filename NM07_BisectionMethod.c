#include<stdio.h>
#include<math.h>

#define f(x) (x*x*x)-(3*x)+1

void main(){
    float a, b, c, fa, fb, fc, e;
    int itr = 1;

    printf("Guess the value of a?\n");
    printf("-> ");
    scanf("%f", &a);
    printf("Guess the value of b?\n");
    printf("-> ");
    scanf("%f", &b);

    fa = f(a); //it must be +ve
    fb = f(b);  //it must be -ve
    if(fa*fb >= 0 || fa < 0 || fb > 0){
        printf("--> Incorrect Initial guesses\n");
    }
    else{
        printf("What is tolerance error?\n");
        printf("-> ");
        scanf("%f", &e);
        
        printf("itr\ta\t\tb\t\tc\t\tfc\n");
        do{
            c = (a+b)/2;
            fc = f(c);
            printf("%d\t%f\t%f\t%f\t%f\n",itr, a, b, c, fc);
            if(fa*fc > 0){
                a = c;
                fa = fc;
            }
            else if(fa*fc < 0){
                b = c;
                fb = fc;
            }
            itr++;
        }while(fabs(fc)>e);
        printf("root is : %f.", c);
    }
}