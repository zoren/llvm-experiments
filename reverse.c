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
      for(long int i = index-1;i > -1;i--) {
        putchar(buffer[i]);
      }
      putchar(nl);
    } else {
      buffer[index] = c;
      index++;
    }
  }

  return 0;
}
