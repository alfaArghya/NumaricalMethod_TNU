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
        //calculate the table
    for(int j = 1; j < n; j++){
        for(int i = 0; i < n-j; i++){
            y[i][j] = (y[i+1][j-1] - y[i][j-1])/(x[j+i] - x[i]);
        }
    }
            //print table
    printf("-----Divided Difference Table-----\n");
    for(int i = 0; i < n; i++){
        printf("%0.2f", x[i]);
        for(int j = 0; j < n-i; j++){
            printf("\t%0.2f", y[i][j]);
        }
        printf("\n");
    }
    printf("----------\n");

    float fx;
    printf("Hat is the value of x whose y is to be found?\n");
    printf("-> ");
    scanf("%f", &fx);

        //calculate value of fx
    float sum = y[0][0];
    for(int j = 1; j < n; j++){
        float p = 1;
        for(int i = 0; i < j; i++){
            p *= (fx - x[i]);
        }
        sum += p* y[0][j];
    }

    printf("Y = %f",sum);
}