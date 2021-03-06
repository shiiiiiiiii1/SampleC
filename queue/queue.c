#include <stdio.h>

const int i = 2;
const int j = 3;

void product(int a[i][j], int b[j][i]) {
  for(int long_t = 0; long_t < i; long_t++) {
    for(int middle_t = 0; middle_t < i; middle_t++) {
      int n = 0;
      for(int short_t = 0; short_t < j; short_t++) {
        n = n + a[long_t][short_t] * b[short_t][middle_t];
      }
      printf("%d ", n);
    }
    printf("\n");
  }
}

int main(void) {
  int a[i][j] = {{3, 5, 2}, {4, 3, 2}};
  int b[j][i] = {{5, 2}, {3, 4}, {1, 9}};

  product(a, b);

  return 0;
}
