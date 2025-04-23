//Swapping of Two Numbers
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the Numbers");
    scanf("%d %d", &a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped Number is: %d %d", a,b);
    return 0;
}