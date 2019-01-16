#include <stdlib.h>
#include <stdio.h>

const int nl = '\n';
const long int buffer_size = 256;

int main() {
  int c;
  int buffer[buffer_size];
  long int index = 0;

  while((c = getchar()) > -1) {
    if(index > buffer_size - 1) {
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
