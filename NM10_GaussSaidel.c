#include<stdio.h>
#include<math.h>

#define f1(x1,x2,x3) (8-2*x2-3*x3)/8
#define f2(x1,x2,x3) (4+x1+3*x3)/8
#define f3(x1,x2,x3) (12-2*x1-x2)/9

void main(){
    float x10 = 0, x20 = 0, x30 = 0, x11, x21, x31, e1, e2, e3, error;
    printf("What is tolerable error?\n");
    printf("-> ");
    scanf("%f", &error);

    printf("itr\tx1\t\tx2\t\tx3\n");
    int itr = 1;
    do{
        x11 = f1(x10,x20,x30);
        x21 = f2(x11,x20,x30);
        x31 = f3(x11,x21,x30);

        printf("%d\t%f\t%f\t%f\n",itr,x11,x21,x31);
        e1 = fabs(x10-x11);
        e2 = fabs(x20-x21);
        e3 = fabs(x30-x31);
        
        x10 = x11;
        x20 = x21;
        x30 = x31;

        itr++;
    }while(e1>error && e2>error && e3>error);
    printf("Solution ->> x1 = %f, x2 = %f, x3 = %f", x11, x21, x31);
}