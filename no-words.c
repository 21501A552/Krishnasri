#include<stdio.h>
#include<math.h>
int main(){
    int n,r=0,digits=0;
    printf("Enter n:");
    scanf("%d",&n);
     digits = (int) log10(n);
    for( ;n!=0;n/=10){
        r=r*10+n%10;
    }
    for( ;r!=0;r/=10){
       switch(r%10){
       case 0:
        printf("zero ");
        break;
       case 1:
        printf("one ");
        break;
        case 2:
        printf("two ");
        break;
        case 3:
        printf("three ");
        break;
        case 4:
        printf("four ");
        break;
        case 5:
        printf("five ");
        break;
        case 6:
        printf("six ");
        break;
        case 7:
        printf("seven ");
        break;
        case 8:
        printf("eight ");
        break;
        case 9:
        printf("nine ");
        break;
       }
    digits =  digits - ((int) log10(r));
    while(digits){
        printf("zero ");
        digits--;
    }
    }
    return 0;
}
