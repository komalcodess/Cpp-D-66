#include <stdio.h>
int prod(int);
int prod(int n){
int f,l;
for(f=n;f>=10;f/=10){
    }
l=n%10;
int mul=f*l;
return mul;
}

int main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);
int flprod=prod(n);
printf("The product of first and last digit of the number is: %d",flprod);
return 0;
}
