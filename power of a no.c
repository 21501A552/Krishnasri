#include<stdio.h>
#include<math.h>
int main(){
    int n,p,r;
    printf("Enter n and power value: ");
    scanf("%d %d",&n,&p);
    r=pow(n,p);
    printf("%d^%d = %d",n,p,r);
    return 0;
}
