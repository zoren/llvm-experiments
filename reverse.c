#include <stdlib.h>
#include <stdio.h>
const int nl = '\n';

int main() {
  int c;
  int buffer[256];
  long int index = 0;

  while((c = getchar())>=0) {
    if(index > 255) {
      return -1;
    }
    if(c == nl) {
      while(index != 0) {
        index--;
        putchar(buffer[index]);
      }
      putchar(nl);
    } else {
      buffer[index] = c;
      index++;
    }
  }

  return 0;
}
