#include <stdio.h>
int main(){
    int a,prev=0, curr= 1, next= 1;
    printf ( "Which term of fibonacci you want: ");
    scanf("%d", &a);
    for (int i =0 ; i<a-2 ; i++){
        next = prev + curr;
        prev= curr;
        curr= next;
    }
printf("%d", next);


    return 0 ;
}