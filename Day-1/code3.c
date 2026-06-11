#include <stdio.h>
int main(){
int a;
int b = 1;
printf("Enter the numbre of which you want to find the factorial of  ");
scanf("%d",&a);


if (a == 0 || a== 1 ){
    printf("1");
}else{
for (int i= 1; i<=a ; i++){
    b *= i;
}
printf("%d",b);
}

return 0;    
}