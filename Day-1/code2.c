#include <stdio.h>
int main(){
int a;
printf("Enter the number of which you want the table of ");
scanf ("%d",&a);
printf("Your table can be written as");
for (int i =1 ;i <=10 ; i++){
    printf("%d X %d = %d", a,i,a*i);
    printf("\n");
}



return 0;    
}