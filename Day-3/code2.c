#include <stdio.h>

int main(){
    int a,b,ll,ul,flag;

    printf("Enter the ll: ");
    scanf("%d",&ll);

    printf("Enter the ul: ");
    scanf("%d",&ul);

    for(b=ll; b<ul; b++){

        if(b<2)
            continue;

        flag=1;

        for(a=2; a<b; a++){
            if(b%a==0){
                flag=0;
                break;
            }
        }

        if(flag==1)
            printf("%d ",b);
    }

    return 0;
}