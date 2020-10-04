#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char num[1000];
    int i;
    scanf("%s",num);
    for(i=48;i<=57;i++){
        int flag=0;
        for(int j=0;j<strlen(num);j++){
            if(num[j]==i){
                flag++;
            }
        }
        printf("%d ",flag);
    }
    return 0;
}

