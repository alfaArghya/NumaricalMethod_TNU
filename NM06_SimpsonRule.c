#include<stdio.h>
#include<math.h>

#define f(x) (log(x));

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

    float x[50], y[50];
        //table calculate & print
    float h = (b-a)/n;
    printf("----------\n");
    for(int i = 0; i <= n; i++){
        x[i] = a+i*h;
        printf("%0.2f",x[i]);
        y[i] = f(x[i]);
        printf("\t%0.2f\n",y[i]);
    }
    printf("----------\n");

        //calculate
    float sum0_n = y[0]+y[n];
    float sumOdd;
    for(int i = 1; i < n; i+=2){
        sumOdd += y[i];
    }
    float sumEven;
    for(int i = 2; i < n-1; i+=2){
        sumEven += y[i];
    }

    float sum = (h/3)*(sum0_n + 4*sumOdd + 2*sumEven);
    printf("Y = %f", sum);

}