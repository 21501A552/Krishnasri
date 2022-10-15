#include<stdio.h>
int main(){
    int n,r=0,m;
    printf("Enter n:");
    scanf("%d",&n);
    m=n;
    for( ;n!=0;n/=10){
        r=r*10+n%10;
    }
    if(r==m){
        printf("Entered no is palindrome");
    }else{
        printf("Entered no is not a palindrome");
    }
    return 0;
}
