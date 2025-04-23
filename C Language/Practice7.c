// Find the largest among 2 numbers

#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the Numbers:");
    scanf("%d %d", &m, &n);
    if(m>n){
        printf("%d", m);
    }
    else{
        printf("%d", n);
    }
    return 0;
}