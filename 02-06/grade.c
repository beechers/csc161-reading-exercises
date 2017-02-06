// In grade.c
#include <stdio.h>

int main(void) {
    int grade = 56;  /* arbitrary initialiaztion of grade */
    char letter = 'f';    /* by default... */

    if (grade > 90) {
        letter = 'a';
    }
    else if (grade > 80) { 
        letter = 'b';
    }
    else if (grade > 70) {
        letter = 'c';
    }
    else if (grade > 60) {
        letter = 'd';
    }
    printf("%c\n", letter);
    return 0;
}

/* Originally, this program would return d for any grade given that was greater than 60 and f for any grade given that was less than or equal to 60. This is because it is running all of the if statements and the last one that is ran is the last if statement so it is giving letter the value of d if greater than 60 and f if less.  */
/* Once I made the program into if else statements, the correct value was the result of the program */

