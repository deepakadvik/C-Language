/*Find sum of first N even numbers*/

#include<stdio.h>
int main(){
    int i,n;
    int Sum=0;
    printf("Enter the Number:");
    scanf("%d", &n);
    for (i = 1; i<=n; i++)
    {
        Sum=Sum+ 2*i;
    }
    printf("Sum of first %d even Number is: %d", n, Sum);
    return 0;
}