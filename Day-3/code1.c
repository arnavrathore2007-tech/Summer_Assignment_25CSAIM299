#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter the number: ");
    scanf ("%d", &a);
    for (int i =2; i<a; i++){
        
        if (a % i == 0)
        {
           c = 0; 
           break;
        }
        
    }
    if (c == 0){
        printf("Is not prime");
    }else{
        printf("Is prime");
    }


    return 0 ;
    }