#include <stdio.h>
int main (){
    char operat;
    int num1,num2,result;
    scanf("%d %d %c",&num1,&num2,&operat);
   if (operat=='+'){
    result=num1+num2;
    printf("%d",&result);
   }
   else if(operat=='-'){
    result=num1-num2;
    printf("%d",&result);
   }
   else if(operat=='*'){
    result=num1*num2;
    printf("%d",result)
   }
   else if(operat=="/"){
    result=num1/num2;
    printf("%d",result);
   }
   else{
    printf("error");
   }
    return 0;
}