//Print odd numbers from 1 to N

#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the Number");
    scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            if (i%2==1)
            {
                printf("%d", i);
            }
        }
    return 0;
}