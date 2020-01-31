#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
        __typeof__ (b) _b = (b); \
        _a > _b ? _a : _b; })


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  //first for and operator
      int abhi = 0;
    
    for (int i = 1; i < n; i++) {
        for (int j = i+1; j < n+1; j++) {
            int anchal = i & j;
            if ((anchal < k) && (abhi < anchal))
                abhi = anchal;
        }
    }
    printf("%d\n", abhi);
    //for or operator
    abhi = 0;
    
    for (int i = 1; i < n; i++) {
        for (int j = i+1; j < n+1; j++) {
            int anchal = i | j;
            if ((anchal < k) && (abhi < anchal))
                abhi = anchal;
        }
    }
    printf("%d\n", abhi);
    //for xor operator
    abhi = 0;
    
    for (int i = 1; i < n; i++) {
        for (int j = i+1; j < n+1; j++) {
            int anchal = i ^ j;
            if ((anchal < k) && (abhi < anchal))
                abhi = anchal;
        }
    }
    printf("%d\n", abhi);

}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

