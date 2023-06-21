#include <stdio.h>

struct complex {
  double real;
  double imaginary;
};

void read_complex(struct complex *c) {
  printf("Enter the real part  ");
  scanf("%lf", &c->real);
  printf("Enter the imaginary part ");
  scanf("%lf", &c->imaginary);
}

void write_complex(struct complex *c) {
  printf("The complex number is %.2lf + %.2lfi\n", c->real, c->imaginary);
}

struct complex add_complex(struct complex c1, struct complex c2) {
  struct complex sum;
  sum.real = c1.real + c2.real;
  sum.imaginary = c1.imaginary + c2.imaginary;
  return sum;
}

struct complex multiply_complex(struct complex c1, struct complex c2) {
  struct complex product;
  product.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
  product.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
  return product;
}

int main() {
  struct complex c1, c2, sum, product;

  read_complex(&c1);
  read_complex(&c2);

  sum = add_complex(c1, c2);
  write_complex(&sum);

  product = multiply_complex(c1, c2);
  write_complex(&product);

  return 0;
}