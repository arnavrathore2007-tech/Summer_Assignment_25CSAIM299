#include <stdio.h>
#include <math.h>
int main(){
    int a,b,next=0,c;
    printf("Enter the number to test for armstrong number \n");
    scanf ("%d", &a);
    c= a;
    if(a<10){
        printf("The number is an armstrong number");
    }else{
    while (a > 0 ){
        b = (a%10)*(a%10)*(a%10);
        next = next + b;
        a= a/10;
    }
    printf("%d\n", next);
   if (next == c){
    printf("The given number is armstrong number");
   }
   else{
    printf("The given number is not an armstrong number");
   }
    }

    return 0;
}