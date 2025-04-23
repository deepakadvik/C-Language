//Calculte compound Intrest

#include<stdio.h>
#include<math.h>
int main(){
    double p,r,n,t;
    double Ammount, CI;
     
    printf("Enter the Principal Ammount");
    scanf("%lf", &p);
    printf("Enter the Rate of Intrest in Year");
    scanf("%lf", &r);
    printf("Enter the number of times interest is compounded per year");
    scanf("%lf", &n);
    printf("Enter the Time");
    scanf("%lf", &t);

    Ammount= p * pow(1+(r/n), n*t);
    CI= Ammount-p;
    
    printf("Compund Intrest is %lf", CI);
    return 0;

}

/*Hey buddy You should know some more Formet Specifier:
Decimal: %d or %i
float: %f
string: %s
double: %lf
Long double:%Lf
Octal: %o
Hexadecimal: %x

*/