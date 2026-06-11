#include <stdio.h>
int main(){
    int a,b; 
    int sum =0 ; 
    
    printf(" Enter the digit: ");
    scanf("%d",&a);

    while(a > 0 ){
        sum += a%10;
        a= a/10;
    }
    printf (" The sum of the digit is %d" ,  sum);
    


return 0;
}