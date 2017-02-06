// In simpleloops.c
// Compile with -std=c11 flag so that variable-initialization in loops works

#include <stdio.h>

int main(void) {
    for (int i = 0; i < 10; i++) {
        printf("%d", i);
    }
    printf("\n");
    for (int i = 0; i <= 10; i++) {
        printf("%d", i);
    }
    printf("\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d", i);
    }
    printf("\n");
    for (int i = 10; i > 0; i--) {
        printf("%d", i);
    }
     printf("\n");
    for (int i = 10; i >= 0; i--) {
        printf("%d", i);
    }
printf("\n");
    return 0;
}

/* 1. In order to create a loop that iterates 10 times, we should choose
the first for-loop. We do not want i to be less than or equal to 10 
because this will iterate 11 times. We want 
for (int i = 0; i < 10; i++) {
        printf("%d", i);
        } */

/* 2. To create a loop that prints the values 0 through 10 in increasing order
we should choose the second for-loop from simpleloops.c. We should use 
 for (int i = 0; i <= 10; i++) {
        printf("%d", i);
        } */

/* 3. To create a loop that prints the values 10 through 0 in decreasing order,
we should choose the last for-loop from simpleloops.c. We should use 
 for (int i = 10; i >= 0; i--) {
        printf("%d", i);
        } */

/* Output of this code: 
0123456789
012345678910
12345678910
10987654321
109876543210
*/
