#include<stdio.h>

void main(){
    int n;
    printf("How many data u want to add(n)?\n");
    printf("-> ");
    scanf("%d", &n);

    float x[50], y[50][50];
    printf("-----Enter the value of x-----\n");
    for(int i = 0; i < n; i++){
        printf("\tx[%d] = ",i);
        scanf("%f", &x[i]);
    }
    printf("-----Enter the value of y-----\n");
    for(int i = 0; i < n; i++){
        printf("\ty[%d][0] = ",i);
        scanf("%f", &y[i][0]);
    }

        //calculate table
    for(int j = 1; j < n; j++){
        for(int i = n-1; i >= j; i--){
            y[i][j] = y[i][j-1] - y[i-1][j-1];
        }
    }

        //print table
    for(int i = 0; i < n; i++){
        printf("%0.2f", x[i]);
        for(int j = 0; j <= i; j++){
            printf("\t%0.2f", y[i][j]);
        }
        printf("\n");
    }

    float fx;
    printf("Hat is the value of x whose y is to be found?\n");
    printf("-> ");
    scanf("%f", &fx);
            //calculation value of fx
    float h = x[1] - x[0];
    float u = (fx - x[n-1])/h;
    float sum = y[n-1][0];
    int fact = 1;
    float p = 1;
    for(int j = 1; j < n; j++){
        fact *= j;
        p *= u-1+j;
        sum += p * y[n-1][j]/fact;
    }
    printf("Value of Y for fx is -> %f", sum);

}
