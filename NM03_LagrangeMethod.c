#include<stdio.h>


void main(){
    int n;
    printf("How many data u want to add(n)?\n");
    printf("-> ");
    scanf("%d", &n);

    float x[50], y[50];
    printf("-----Enter the value of x-----\n");
    for(int i = 0; i < n; i++){
        printf("\tx[%d] = ",i);
        scanf("%f", &x[i]);
    }
    printf("-----Enter the value of y-----\n");
    for(int i = 0; i < n; i++){
        printf("\ty[%d] = ",i);
        scanf("%f", &y[i]);
    }

    printf("----------\n");
    for(int i = 0; i < n; i++){
        printf("%0.2f", x[i]);
        printf("\t%0.2f\n", y[i]);
    }
    printf("----------\n");

    float fx;
    printf("what is the value of x whose y is to be found?\n");
    printf("-> ");
    scanf("%f", &fx);
        //calculate fx
    float sum;
    for(int i = 0; i < n; i++){
        float p = 1;
        for(int j = 0; j < n; j++){
            if(i!=j){
                p *= (fx - x[j])/(x[i] - x[j]);
            }
        }
        sum += y[i]*p;
    }

    printf("Y = %f",sum);

}