#include <iostream>
#include "DynamicArray.h"

int main() {
  auto dynamicArray = DynamicArray<int>(10);
  for(int i = 0; i < 20; i++) {
    dynamicArray.push(i);
  }
  for(int i = 0; i < dynamicArray.size(); i++) {
    std::cout << dynamicArray[i] << '\n';
  }
  return 0;
}
