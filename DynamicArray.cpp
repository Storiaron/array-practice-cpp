//
// Created by User on 2024. 01. 17..
//

#include "DynamicArray.h"
template class DynamicArray<int>;
template class DynamicArray<double>;
template<typename T>
void DynamicArray<T>::push(T element) {
  if(lastElement < length - 1) {
    arr[++lastElement] = element;
  }
  else {
    length = length * growthFactor;
    T* newArr = new T[length];
    for(int i = 0; i < length; i++) {
      newArr[i] = arr[i];
    }
    delete[] arr;
    arr = newArr;
  }
}

template<typename T>
T DynamicArray<T>::operator[](int index) {
  if(index <= lastElement) {
    return arr[index];
  }
  else {
    return 0;
  }
}
