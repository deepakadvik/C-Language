// Find the largest among 3 numbers

#include<stdio.h>
int main(){
    int l,m,n;
    printf("Enter the Numbers");
    scanf("%d %d %d", &l, &m, &n );

    if(l>m && l>n){
        printf("Largest amang these is: %d", l);
    }
    else{
        if(m>n){
            printf("Largest amang these is: %d", m);
        }
        else{
            printf("Largest amang these is: %d", n);
        }
    }
    return 0;
}