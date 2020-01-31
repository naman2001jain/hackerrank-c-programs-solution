#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, last;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    last=n%10;
    while(n=n/10){
        last+=n%10;
    }
    printf("%d", last);
    return 0;
}


