#include <Stdio.h>
int main(){
    int a,b;
    int prod = 1; 
    printf("Enter the desired number: ");
    scanf("%d" , &a); 
     while (a>0){
        prod *= a%10 ;
        a= a/10;
     }
     printf ("The product of the digits is %d" , prod);

     return 0 ;
}