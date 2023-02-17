#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    srand(time(0));  // Use current time as seed for random generator
    n = rand() - RAND_MAX / 2;  // Generate a random number between -RAND_MAX/2 and RAND_MAX/2
    
    printf("%d\n", n);
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }
    
    return 0;
}
