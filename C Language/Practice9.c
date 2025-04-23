//Check if a number is prime

#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number");
    scanf("%d", &n);
    if(n%2==1){
        printf("Given Number is Prime");
    }
    else{
        printf("Given Number is not Prime");
    }
    return 0;
}
/* Note thet its not for all cases
 For n = 1 and 2 it will give Multiple output!*/