#include<stdio.h>
#include<math.h>

#define f(x) (log(x));

void main(){
    float a, b;
    int n = 6;

    printf("What is lower limit(a)?\n");
    printf("-> ");
    scanf("%f", &a);
    printf("What is upper limit(b)?\n");
    printf("-> ");
    scanf("%f", &b);

    float x[50], y[50];
    float h = (b-a)/n;
    printf("----------\n");
    for(int i = 0; i <= n; i++){
        x[i] = a+i*h;
        printf("%0.2f",x[i]);
        y[i] = f(x[i]);
        printf("\t%0.2f\n",y[i]);
    }
    printf("----------\n");

    float sum = ((3*h)/10) * (y[0] + 5*y[1] + y[2] + 6*y[3] + y[4] + 5*y[5] + y[6]);
    printf("Y = %f", sum);

}