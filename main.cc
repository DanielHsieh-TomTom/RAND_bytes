#include <openssl/err.h>
#include <openssl/rand.h>
#include <cstdio>
constexpr int num(128);
unsigned char buf[num];

int main() {
  if (RAND_bytes(buf, num) != 1) {
    printf("Failed: %lul\n", ERR_get_error());
    return 1;
  } else {
    printf("Succeeded\n");
    return 0;
  }
}
