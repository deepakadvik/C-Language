//Counting Number of Digits

#include<stdio.h>
int main(){
    int Num;
    int Count=0;
    printf("Enter the Number:\n");
    scanf("%d", &Num);
    if (Num == 0){
        Count = 1;
    }
    else{
        if (Num < 0)
        Num = -Num;

        while(Num!=0)
        {
            Num=Num/10;
            Count++;
        }
    }
    printf("Total Number of Digits is: %d", Count);
    return 0;
}