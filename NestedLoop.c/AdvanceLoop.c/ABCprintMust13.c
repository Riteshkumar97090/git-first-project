#include<stdio.h>
int main(){
    int n;
    printf("enter row :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=64+i;
        if(i==1){
        for(int j=1;j<=n;j++){
            printf("%c",a);
            a++;
        }
        }
        else{
            for(int k=1;k<=1;k++){
                printf("%c",a);
            }
        }
        printf("\n");
    }
    return 0;
}