#include <stdio.h>
#include <stdbool.h>

float expt(float x, int y) {
  float a = 1;

  if(y < 0) {
    y = -y;
  for(int i = 0; i < y; i++) {
      a = (a / x);
  }
  }
    else {
      for(int j = 0; j < y; j++) {
      a = (a * x);
      }
    }
  return a;
}

int main(void) {
   printf("%f\n", expt(2, 3));
   printf("%f\n", expt(0.5, 2));
   printf("%f\n", expt(0.25, -2));
   printf("%f\n", expt(10.0, 0));
  return 0;
}
        
        
