#include <stdio.h>
int main() {
    int height,i,j;
    scanf("%d",&height);

    for (i=1;i<=height;i++) {
        for (j=1;j<=i,j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}