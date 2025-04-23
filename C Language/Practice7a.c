// Find the largest among 2 numbers (Method2)
#include<stdio.h>
int main(){
    int p,q, Largest;
    printf("Enter the Numbers:");
    scanf("%d %d", &p, &q);
    Largest = p>q ? p : q;
    printf("Largent among these is: %d", Largest);
    return 0;
}