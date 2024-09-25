#include<stdio.h>
int main(){
    int i=1;
    int a;
    printf("enter base :");
    scanf("%d",&a);
    int n;
    printf("enter power :");
    scanf("%d",&n);
    int base=a;
    while(i<n){
        a=a*base;
        i++;
    }
    printf("%d",a);
    return 0;
}