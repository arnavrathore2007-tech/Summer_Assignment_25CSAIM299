#include <stdio.h>
int main(){
    int a, prev=0 , curr=1 , next=1 ;
    printf("Enter the term upto which you want the fibonnaci series");
    scanf("%d", &a);
    printf("%d \n", prev);
    printf("%d \n", curr);
    for(int i = 0; i<a; i++){
        next = prev + curr;
        printf("%d \n", next);
        prev = curr;
        curr = next;
    }

    return 0;
}

