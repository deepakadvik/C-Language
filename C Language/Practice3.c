//Swapping of Two Numbers Using Third Variable

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the Numbers");
    scanf("%d %d", &a,&b);
    c=a;
    a=b;
    b=c;
    printf("Swapped Number is: %d %d", a,b);
    return 0;
}

