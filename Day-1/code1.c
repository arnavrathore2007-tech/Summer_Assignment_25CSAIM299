

#include <stdio.h>
int main(){
int a, prev = 0;
int sum = 0;
printf("Enter the number upto which you want the sum of ");
scanf("%d", &a);
for (int i=1 ; i<=a; i++){
    sum += i;
}
printf("%d", sum);


return 0;    
}
