// Find the largest among 3 numbers(Method2)

#include<stdio.h>
int main(){
    int l,m,n,Largest;
    printf("Enter the Numbers");
    scanf("%d %d %d", &l, &m, &n );
    Largest=l>m&&l>n?l:m>n?m:n;
    printf("Lasgest among these is: %d", Largest);
    return 0;
}