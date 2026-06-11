#include <stdio.h>
#include <math.h>
int main(){
int a;
printf("Enter the number ");
scanf("%d", &a);
for(int i = 0 ;  ; i++){
int ul = pow(10, i );
int ll = pow(10,i-1);
if (a> ll && a< ul){
    printf (" The digits in the number are %d" , i );
    break;
}
}
return 0;    
}