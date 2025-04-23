//Factorial of Number

#include<stdio.h>
int main(){
    int i,n;
    int Mul=1;
    printf("Enter the Number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        Mul=Mul*i;
    }
    printf("Factorial of %d is %d", n, Mul);
    return 0;
}