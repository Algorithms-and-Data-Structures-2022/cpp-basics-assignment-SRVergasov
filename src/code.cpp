#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

    int diff;
    diff = left - right;

    return diff * diff;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {

    if (mask * bit_pos < 0) {
      return false;
    }
    int counter = 0;
    while (mask != 0) {
      int b = mask % 2;
      if (counter == bit_pos && b == 1) {
        return true;
      }
      mask /= 2;
      counter++;
    }

    return false;
  }

  // Task 3
  int max3(int left, int middle, int right) {

    int m;
    m = left;
    if (m < middle) {
      m = middle;
    }
    if (m < right) {
      m = right;
    }

    return m;
  }

  // Task 4
  void swap_args(int *left, int *right) {

    if (left != nullptr && right != nullptr) {
      int c = *left;
      *left = *right;
      *right = c;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {

    if (arr == nullptr || length <= 0) {
      return 0;
    }
    int sum = 0;
    for (int i = 0; i < length; i++) {
      sum += arr[i];
    }

    return sum;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    if (arr == nullptr || length <= 0) {
      return nullptr;
    }
    int max_elem = 0;

    for (int i = 0; i < length; i++) {
      if (arr[i] > max_elem) {
        max_elem = arr[i];
      }
    }

    for (int i = 0; i < length; i++) {
      if (arr[i] == max_elem) {
        return &arr[i];
      }
    }
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    if (length <= 0) {
      return nullptr;
    }

    int* pointer_to_new_array = new int[length];
    std::fill(&pointer_to_new_array[0], &pointer_to_new_array[0] + length, init_value);
    return &pointer_to_new_array[0];
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    if (arr_in == nullptr || length <= 0) {
      return nullptr;
    }

    int* new_array = new int[length];
    std::copy(arr_in, arr_in + length, new_array);
    return new_array;

  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment
