#include <stdio.h>
#include <stdbool.h>

void change(int x) {
    x = 3;
}

int main(void) {
    int x = 0;
    change(x);
    printf("%d\n", x);
}

/* Before running this program I believed that 0 would be returned 
because of the Stack model we discussed earlier in the year. We know
that once we call and leave the change function, the stack frame of 
change is "popped". This means that x still is assigned 0 from the main
function. After running the program, we see that 0 is returned. When change
is called, x is assigned 3 on top of the stack, however when we return to
main after change runs, we see that 0 is still assigned to x.*/
