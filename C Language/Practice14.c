// Calculate Simple Interest

#include<stdio.h>
int main(){
    int P,R,T;
    int SI;
    printf("Enter Principal amount:");
    scanf("%d", &P);
    printf("Enter Rate of interest per Year:");
    scanf("%d", &R);
    printf("Enter Time");
    scanf("%d", &T);
    SI=P*R*T/100;
    printf("Simple Intrest is: %d", SI);
    return 0;
}