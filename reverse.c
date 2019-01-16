#include <stdlib.h>
#include <stdio.h>

const int nl = '\n';
const long int buffer_size = 256;

int main() {
  int c;
  long int index = 0;
  int buffer[buffer_size];

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
