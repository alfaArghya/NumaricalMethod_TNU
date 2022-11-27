#include<stdio.h>
#include<math.h>

#define f(x) (3*x)-cos(x)-1;
#define g(x) 3+sin(x);

void main(){
    int itr = 1,n;
    float x0, x1, f0, g0, f1, e;

    printf("What is your initial guess?\n");
    printf("-> ");
    scanf("%f", &x0);
    printf("What tolerable error?\n");
    printf("--> ");
    scanf("%f", &e);
    printf("What is the maximum iteration?\n");
    printf("--> ");
    scanf("%f", &n);

    printf("itr\tx0\t\tf0\t\tg0\t\tx1\t\tf1\n");
    do{
        f0 = f(x0);
        g0 = g(x0);
        if(g0 == 0){
            printf("--> Mathematical error!");
            break;
        }
        x1 = x0 - (f0/g0);
        f1 = f(x1);
        printf("%d\t%f\t%f\t%f\t%f\t%f\n",itr,x0,f0,g0,x1,f1);

        itr++;
        if(itr > n){
            printf("--> Kindly increase maximum iteration to reach the final answer\n");
            break;
        }
        
        x0 = x1;

    }while(fabs(f1) > e);
    printf("Root is -> %f", x1);

}