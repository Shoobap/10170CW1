#include <iostream>

int a = 0;

void setA() {
  a = 5;
}

int main() {
  std::cout << "Hello World!\n";
  std::cout << "Im Matas!\n";
  setA();
  std::cout << a;
}

