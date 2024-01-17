//
// Created by User on 2024. 01. 17..
//

#ifndef ARRAY_PRACTICE_CPP__DYNAMICARRAY_H_
#define ARRAY_PRACTICE_CPP__DYNAMICARRAY_H_
template <typename T>

class DynamicArray {
 public:
  DynamicArray(int size, int growthFactor = 2) {
    arr = new T[size];
    length = size;
    this->growthFactor = growthFactor;
  }
  T operator [](int index);
  void push(T element);
  int size() { return length;}
 private:
  T* arr;
  int length;
  int lastElement{-1};
  int growthFactor;
};

#endif //ARRAY_PRACTICE_CPP__DYNAMICARRAY_H_
