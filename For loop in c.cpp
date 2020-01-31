#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b, n;
    const char *day[9] = {"one", "two", "three", "four", "five",
                              "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
    
    for (n = a; n <= b; n++) {
        if ((n > 0) && (n < 10))
            printf("%s\n", day[n-1]);
        else
            printf("%s\n", (n%2) ? "odd" : "even");
    }

    return 0;
}

