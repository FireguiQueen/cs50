#include <stdio.h> 

int main(void){
    float x, y; 

    printf("Please, type a value for: \n ");

    printf("X: "); 
    scanf("%f", &x);

    printf("Y: "); 
    scanf("%f", &y);

    if(x > y){
        printf("X is greater than Y.");
    } else if(y > x){
        printf("Y is greater than X.");
    } else{
        printf("X is equals to Y");
    }
}
}