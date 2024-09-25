#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    int a=65,b=97;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){             //not clear
            if(j%2)
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}