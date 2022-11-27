#include<stdio.h>
#include<math.h>

#define f(x) (exp(x));

void main(){
    float a, b;
    int n;

    printf("What is lower limit(a)?\n");
    printf("-> ");
    scanf("%f", &a);
    printf("What is upper limit(b)?\n");
    printf("-> ");
    scanf("%f", &b);
    printf("What is interval?\n");
    printf("-> ");
    scanf("%d", &n);

    float x[50], y[50], h;

        //table calculate and print
    h = (b-a)/n;
    printf("----------\n");
    for(int i = 0; i <= n; i++){
        x[i] = a+i*h;
        printf("%0.2f", x[i]);
        y[i] = f(x[i]);
        printf("\t%0.2f\n", y[i]);
    }
    printf("----------\n");

        //calculate 
    float sum, sum1, sum2;
    sum1 = y[0]+y[n];

    for(int i = 1; i < n; i++){
        sum2 +=  y[i];
    }

    sum = (h/2) * (sum1+2*sum2);
    printf("I = %f", sum);

}