#include <stdio.h>
int main() {
    int a ,b;
    scanf("%d %d",&a,&b);
    if(a>0){
        printf("Positive\n");
    }
    elseif(a==0){
        printf("Zero");
    }
    else{
        printf("Negative\n");
    }
    
    return 0;
}